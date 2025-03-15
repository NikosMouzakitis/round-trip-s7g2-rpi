/* HAL-only entry function */
#include "hal_data.h"
#include "r_sci_uart.h"
#include <string.h>

uint8_t receive_buffer[4];	// Buffer to store received data
uint8_t buffer_index = 0;	//index used to save bytes in the receive_buffer.
uint8_t rec_len = 0;		//complete reception length.

const bsp_delay_units_t bsp_delay_units = BSP_DELAY_UNITS_MILLISECONDS;  // Define the units to be used with the software delay function
const uint32_t freq_in_hz = 2;	// Set the blink frequency (must be <= bsp_delay_units
const uint32_t delay = bsp_delay_units/freq_in_hz;	// Calculate the delay in terms of bsp_delay_units
bsp_leds_t leds; // LED type structure 
ioport_level_t level = IOPORT_LEVEL_HIGH; // LED state variable
uint8_t reception_complete_flag = 0;


void user_uart_callback(uart_callback_args_t *pargs)
{
	
	if( (pargs->event == UART_EVENT_TX_COMPLETE) || (pargs->event == UART_EVENT_TX_DATA_EMPTY) ) {
		int x = 9;	 // just a dummy assignment in
				 // order to get past compiler 
				 // error-warning fashion.
	} else if(pargs->event == UART_EVENT_RX_CHAR) {

		if(pargs->data!='\n') {    //store the received bytes in receive_buffer

			receive_buffer[buffer_index] = (uint8_t) pargs->data;
			buffer_index++;

		} else if(pargs->data == '\n') {
			rec_len = buffer_index; // update the reception length.
			buffer_index = 0; //reset it for next reception.	
			reception_complete_flag++;
		} else if(pargs->data == 27) //escape character.
		{
			int x = 9; //dummy
		}
	}
}

void halt(void)
{

	g_ioport.p_api->pinWrite(leds.p_leds[0], IOPORT_LEVEL_HIGH);
	g_ioport.p_api->pinWrite(leds.p_leds[1], IOPORT_LEVEL_HIGH);
	g_ioport.p_api->pinWrite(leds.p_leds[2], IOPORT_LEVEL_HIGH);
	while(1);
}
void hal_entry(void)
{
	/* Get LED information for this board */
	R_BSP_LedsGet(&leds);

	/* If this board has no LEDs then trap here */
	if (0 == leds.led_count)
	{
		while(1);   // There are no LEDs on this board
	}


	//open uart
	ssp_err_t err  = g_uart0.p_api->open(g_uart0.p_ctrl,g_uart0.p_cfg);
	if(err != SSP_SUCCESS)
		halt();

	const char *msg="\r\n";

	g_ioport.p_api->pinWrite(leds.p_leds[1], IOPORT_LEVEL_HIGH);
	g_ioport.p_api->pinWrite(leds.p_leds[2], IOPORT_LEVEL_HIGH);


	while(1) {

		//do the transmission, based on we 've had a completed reception.
		if(reception_complete_flag) {
			g_uart0.p_api->write(g_uart0.p_ctrl,(uint8_t *)receive_buffer, rec_len);  //write to UART.
			g_uart0.p_api->write(g_uart0.p_ctrl,(uint8_t *)msg, strlen(msg));  //write to UART.

			reception_complete_flag = 0; //reset it to zero. only reply when we have received a message.
		}

		//logic to swap pin-levels.
		if(IOPORT_LEVEL_LOW == level)
		{
			level = IOPORT_LEVEL_HIGH;
		}
		else
		{
			level = IOPORT_LEVEL_LOW;
		}

		g_ioport.p_api->pinWrite(leds.p_leds[0], level);	//alter LED level

		R_BSP_SoftwareDelay(delay, 2*bsp_delay_units);		// do the specified delay
	}
}
