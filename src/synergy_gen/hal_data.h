/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_sci_uart.h"
#include "r_uart_api.h"
#ifdef __cplusplus
extern "C" {
#endif
/** UART on SCI Instance. */
extern const uart_instance_t g_uart0;
#ifdef NULL
            #else
extern void NULL(uint32_t channel, uint32_t level);
#endif
#ifndef user_uart_callback
void user_uart_callback(uart_callback_args_t *p_args);
#endif
void hal_entry(void);
void g_hal_init(void);
#ifdef __cplusplus
} /* extern "C" */
#endif
#endif /* HAL_DATA_H_ */
