/***********************************************************************************************************************
 * Copyright [2015-2024] Renesas Electronics Corporation and/or its licensors. All Rights Reserved.
 * 
 * This file is part of Renesas SynergyTM Software Package (SSP)
 *
 * The contents of this file (the "contents") are proprietary and confidential to Renesas Electronics Corporation
 * and/or its licensors ("Renesas") and subject to statutory and contractual protections.
 *
 * This file is subject to a Renesas SSP license agreement. Unless otherwise agreed in an SSP license agreement with
 * Renesas: 1) you may not use, copy, modify, distribute, display, or perform the contents; 2) you may not use any name
 * or mark of Renesas for advertising or publicity purposes or in connection with your use of the contents; 3) RENESAS
 * MAKES NO WARRANTY OR REPRESENTATIONS ABOUT THE SUITABILITY OF THE CONTENTS FOR ANY PURPOSE; THE CONTENTS ARE PROVIDED
 * "AS IS" WITHOUT ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE, AND NON-INFRINGEMENT; AND 4) RENESAS SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, OR
 * CONSEQUENTIAL DAMAGES, INCLUDING DAMAGES RESULTING FROM LOSS OF USE, DATA, OR PROJECTS, WHETHER IN AN ACTION OF
 * CONTRACT OR TORT, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THE CONTENTS. Third-party contents
 * included in this file may be subject to different terms.
 **********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : bsp_elc.h
* Description  : ELC Interface.
***********************************************************************************************************************/
/*******************************************************************************************************************//**
 * @addtogroup BSP_MCU_S7G2
 *
 * @{
 **********************************************************************************************************************/

#ifndef BSP_ELCDEFS_H_
#define BSP_ELCDEFS_H_

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Exported global variables
***********************************************************************************************************************/

/***********************************************************************************************************************
Exported global functions (to be accessed by other files)
***********************************************************************************************************************/
/** Possible peripherals to be linked to event signals */
typedef enum e_elc_peripheral
{
    ELC_PERIPHERAL_GPT_A                                                        =    (0),
    ELC_PERIPHERAL_GPT_B                                                        =    (1),
    ELC_PERIPHERAL_GPT_C                                                        =    (2),
    ELC_PERIPHERAL_GPT_D                                                        =    (3),
    ELC_PERIPHERAL_GPT_E                                                        =    (4),
    ELC_PERIPHERAL_GPT_F                                                        =    (5),
    ELC_PERIPHERAL_GPT_G                                                        =    (6),
    ELC_PERIPHERAL_GPT_H                                                        =    (7),
    ELC_PERIPHERAL_ADC0                                                         =    (8),
    ELC_PERIPHERAL_ADC0_B                                                       =    (9),
    ELC_PERIPHERAL_ADC1                                                         =   (10),
    ELC_PERIPHERAL_ADC1_B                                                       =   (11),
    ELC_PERIPHERAL_DAC0                                                         =   (12),
    ELC_PERIPHERAL_DAC1                                                         =   (13),
    ELC_PERIPHERAL_IOPORT1                                                      =   (14),
    ELC_PERIPHERAL_IOPORT2                                                      =   (15),
    ELC_PERIPHERAL_IOPORT3                                                      =   (16),
    ELC_PERIPHERAL_IOPORT4                                                      =   (17),
    ELC_PERIPHERAL_CTSU                                                         =   (18),
} elc_peripheral_t;

/** Sources of event signals to be linked to other peripherals or the CPU1
 * @note This list may change based on device. This list is for S7G2.
 * */
typedef enum e_elc_event
{
    ELC_EVENT_ICU_IRQ0                                                          =    (1),
    ELC_EVENT_ICU_IRQ1                                                          =    (2),
    ELC_EVENT_ICU_IRQ2                                                          =    (3),
    ELC_EVENT_ICU_IRQ3                                                          =    (4),
    ELC_EVENT_ICU_IRQ4                                                          =    (5),
    ELC_EVENT_ICU_IRQ5                                                          =    (6),
    ELC_EVENT_ICU_IRQ6                                                          =    (7),
    ELC_EVENT_ICU_IRQ7                                                          =    (8),
    ELC_EVENT_ICU_IRQ8                                                          =    (9),
    ELC_EVENT_ICU_IRQ9                                                          =   (10),
    ELC_EVENT_ICU_IRQ10                                                         =   (11),
    ELC_EVENT_ICU_IRQ11                                                         =   (12),
    ELC_EVENT_ICU_IRQ12                                                         =   (13),
    ELC_EVENT_ICU_IRQ13                                                         =   (14),
    ELC_EVENT_ICU_IRQ14                                                         =   (15),
    ELC_EVENT_ICU_IRQ15                                                         =   (16),
    ELC_EVENT_DMAC0_INT                                                         =   (32),
    ELC_EVENT_DMAC1_INT                                                         =   (33),
    ELC_EVENT_DMAC2_INT                                                         =   (34),
    ELC_EVENT_DMAC3_INT                                                         =   (35),
    ELC_EVENT_DMAC4_INT                                                         =   (36),
    ELC_EVENT_DMAC5_INT                                                         =   (37),
    ELC_EVENT_DMAC6_INT                                                         =   (38),
    ELC_EVENT_DMAC7_INT                                                         =   (39),
    ELC_EVENT_DTC_COMPLETE                                                      =   (41),
    ELC_EVENT_DTC_END                                                           =   (42),
    ELC_EVENT_ICU_SNOOZE_CANCEL                                                 =   (45),
    ELC_EVENT_FCU_FIFERR                                                        =   (48),
    ELC_EVENT_FCU_FRDYI                                                         =   (49),
    ELC_EVENT_LVD_LVD1                                                          =   (56),
    ELC_EVENT_LVD_LVD2                                                          =   (57),
    ELC_EVENT_CGC_MOSC_STOP                                                     =   (59),
    ELC_EVENT_LPM_SNOOZE_REQUEST                                                =   (60),
    ELC_EVENT_AGT0_INT                                                          =   (64),
    ELC_EVENT_AGT0_COMPARE_A                                                    =   (65),
    ELC_EVENT_AGT0_COMPARE_B                                                    =   (66),
    ELC_EVENT_AGT1_INT                                                          =   (67),
    ELC_EVENT_AGT1_COMPARE_A                                                    =   (68),
    ELC_EVENT_AGT1_COMPARE_B                                                    =   (69),
    ELC_EVENT_IWDT_UNDERFLOW                                                    =   (70),
    ELC_EVENT_WDT_UNDERFLOW                                                     =   (71),
    ELC_EVENT_RTC_ALARM                                                         =   (72),
    ELC_EVENT_RTC_PERIOD                                                        =   (73),
    ELC_EVENT_RTC_CARRY                                                         =   (74),
    ELC_EVENT_ADC0_SCAN_END                                                     =   (75),
    ELC_EVENT_ADC0_SCAN_END_B                                                   =   (76),
    ELC_EVENT_ADC0_WINDOW_A                                                     =   (77),
    ELC_EVENT_ADC0_WINDOW_B                                                     =   (78),
    ELC_EVENT_ADC0_COMPARE_MATCH                                                =   (79),
    ELC_EVENT_ADC0_COMPARE_MISMATCH                                             =   (80),
    ELC_EVENT_ADC1_SCAN_END                                                     =   (81),
    ELC_EVENT_ADC1_SCAN_END_B                                                   =   (82),
    ELC_EVENT_ADC1_WINDOW_A                                                     =   (83),
    ELC_EVENT_ADC1_WINDOW_B                                                     =   (84),
    ELC_EVENT_ADC1_COMPARE_MATCH                                                =   (85),
    ELC_EVENT_ADC1_COMPARE_MISMATCH                                             =   (86),
    ELC_EVENT_COMP_HS_0                                                         =   (87),
    ELC_EVENT_COMP_HS0_INT                                                      =   (87),
    ELC_EVENT_COMP_HS_1                                                         =   (88),
    ELC_EVENT_COMP_HS1_INT                                                      =   (88),
    ELC_EVENT_COMP_HS_2                                                         =   (89),
    ELC_EVENT_COMP_HS2_INT                                                      =   (89),
    ELC_EVENT_COMP_HS_3                                                         =   (90),
    ELC_EVENT_COMP_HS3_INT                                                      =   (90),
    ELC_EVENT_COMP_HS_4                                                         =   (91),
    ELC_EVENT_COMP_HS4_INT                                                      =   (91),
    ELC_EVENT_COMP_HS_5                                                         =   (92),
    ELC_EVENT_COMP_HS5_INT                                                      =   (92),
    ELC_EVENT_USBFS_FIFO_0                                                      =   (95),
    ELC_EVENT_USBFS_FIFO_1                                                      =   (96),
    ELC_EVENT_USBFS_INT                                                         =   (97),
    ELC_EVENT_USBFS_RESUME                                                      =   (98),
    ELC_EVENT_IIC0_RXI                                                          =   (99),
    ELC_EVENT_IIC0_TXI                                                          =  (100),
    ELC_EVENT_IIC0_TEI                                                          =  (101),
    ELC_EVENT_IIC0_ERI                                                          =  (102),
    ELC_EVENT_IIC0_WUI                                                          =  (103),
    ELC_EVENT_IIC1_RXI                                                          =  (104),
    ELC_EVENT_IIC1_TXI                                                          =  (105),
    ELC_EVENT_IIC1_TEI                                                          =  (106),
    ELC_EVENT_IIC1_ERI                                                          =  (107),
    ELC_EVENT_IIC2_RXI                                                          =  (109),
    ELC_EVENT_IIC2_TXI                                                          =  (110),
    ELC_EVENT_IIC2_TEI                                                          =  (111),
    ELC_EVENT_IIC2_ERI                                                          =  (112),
    ELC_EVENT_SSI0_TXI                                                          =  (114),
    ELC_EVENT_SSI0_RXI                                                          =  (115),
    ELC_EVENT_SSI0_INT                                                          =  (117),
    ELC_EVENT_SSI1_TXI_RXI                                                      =  (120),
    ELC_EVENT_SSI1_INT                                                          =  (121),
    ELC_EVENT_SRC_INPUT_FIFO_EMPTY                                              =  (122),
    ELC_EVENT_SRC_OUTPUT_FIFO_FULL                                              =  (123),
    ELC_EVENT_SRC_OUTPUT_FIFO_OVERFLOW                                          =  (124),
    ELC_EVENT_SRC_OUTPUT_FIFO_UNDERFLOW                                         =  (125),
    ELC_EVENT_SRC_CONVERSION_END                                                =  (126),
    ELC_EVENT_PDC_RECEIVE_DATA_READY                                            =  (127),
    ELC_EVENT_PDC_FRAME_END                                                     =  (128),
    ELC_EVENT_PDC_INT                                                           =  (129),
    ELC_EVENT_CTSU_WRITE                                                        =  (130),
    ELC_EVENT_CTSU_READ                                                         =  (131),
    ELC_EVENT_CTSU_END                                                          =  (132),
    ELC_EVENT_KEY_INT                                                           =  (133),
    ELC_EVENT_DOC_INT                                                           =  (134),
    ELC_EVENT_CAC_FREQUENCY_ERROR                                               =  (135),
    ELC_EVENT_CAC_MEASUREMENT_END                                               =  (136),
    ELC_EVENT_CAC_OVERFLOW                                                      =  (137),
    ELC_EVENT_CAN0_ERROR                                                        =  (138),
    ELC_EVENT_CAN0_FIFO_RX                                                      =  (139),
    ELC_EVENT_CAN0_FIFO_TX                                                      =  (140),
    ELC_EVENT_CAN0_MAILBOX_RX                                                   =  (141),
    ELC_EVENT_CAN0_MAILBOX_TX                                                   =  (142),
    ELC_EVENT_CAN1_ERROR                                                        =  (143),
    ELC_EVENT_CAN1_FIFO_RX                                                      =  (144),
    ELC_EVENT_CAN1_FIFO_TX                                                      =  (145),
    ELC_EVENT_CAN1_MAILBOX_RX                                                   =  (146),
    ELC_EVENT_CAN1_MAILBOX_TX                                                   =  (147),
    ELC_EVENT_IOPORT_EVENT_1                                                    =  (148),
    ELC_EVENT_IOPORT_EVENT_2                                                    =  (149),
    ELC_EVENT_IOPORT_EVENT_3                                                    =  (150),
    ELC_EVENT_IOPORT_EVENT_4                                                    =  (151),
    ELC_EVENT_ELC_SOFTWARE_EVENT_0                                              =  (152),
    ELC_EVENT_ELC_SOFTWARE_EVENT_1                                              =  (153),
    ELC_EVENT_POEG0_EVENT                                                       =  (154),
    ELC_EVENT_POEG1_EVENT                                                       =  (155),
    ELC_EVENT_POEG2_EVENT                                                       =  (156),
    ELC_EVENT_POEG3_EVENT                                                       =  (157),
    ELC_EVENT_GPT0_CAPTURE_COMPARE_A                                            =  (176),
    ELC_EVENT_GPT0_CAPTURE_COMPARE_B                                            =  (177),
    ELC_EVENT_GPT0_COMPARE_C                                                    =  (178),
    ELC_EVENT_GPT0_COMPARE_D                                                    =  (179),
    ELC_EVENT_GPT0_COMPARE_E                                                    =  (180),
    ELC_EVENT_GPT0_COMPARE_F                                                    =  (181),
    ELC_EVENT_GPT0_COUNTER_OVERFLOW                                             =  (182),
    ELC_EVENT_GPT0_COUNTER_UNDERFLOW                                            =  (183),
    ELC_EVENT_GPT0_AD_TRIG_A                                                    =  (184),
    ELC_EVENT_GPT0_AD_TRIG_B                                                    =  (185),
    ELC_EVENT_GPT1_CAPTURE_COMPARE_A                                            =  (186),
    ELC_EVENT_GPT1_CAPTURE_COMPARE_B                                            =  (187),
    ELC_EVENT_GPT1_COMPARE_C                                                    =  (188),
    ELC_EVENT_GPT1_COMPARE_D                                                    =  (189),
    ELC_EVENT_GPT1_COMPARE_E                                                    =  (190),
    ELC_EVENT_GPT1_COMPARE_F                                                    =  (191),
    ELC_EVENT_GPT1_COUNTER_OVERFLOW                                             =  (192),
    ELC_EVENT_GPT1_COUNTER_UNDERFLOW                                            =  (193),
    ELC_EVENT_GPT1_AD_TRIG_A                                                    =  (194),
    ELC_EVENT_GPT1_AD_TRIG_B                                                    =  (195),
    ELC_EVENT_GPT2_CAPTURE_COMPARE_A                                            =  (196),
    ELC_EVENT_GPT2_CAPTURE_COMPARE_B                                            =  (197),
    ELC_EVENT_GPT2_COMPARE_C                                                    =  (198),
    ELC_EVENT_GPT2_COMPARE_D                                                    =  (199),
    ELC_EVENT_GPT2_COMPARE_E                                                    =  (200),
    ELC_EVENT_GPT2_COMPARE_F                                                    =  (201),
    ELC_EVENT_GPT2_COUNTER_OVERFLOW                                             =  (202),
    ELC_EVENT_GPT2_COUNTER_UNDERFLOW                                            =  (203),
    ELC_EVENT_GPT2_AD_TRIG_A                                                    =  (204),
    ELC_EVENT_GPT2_AD_TRIG_B                                                    =  (205),
    ELC_EVENT_GPT3_CAPTURE_COMPARE_A                                            =  (206),
    ELC_EVENT_GPT3_CAPTURE_COMPARE_B                                            =  (207),
    ELC_EVENT_GPT3_COMPARE_C                                                    =  (208),
    ELC_EVENT_GPT3_COMPARE_D                                                    =  (209),
    ELC_EVENT_GPT3_COMPARE_E                                                    =  (210),
    ELC_EVENT_GPT3_COMPARE_F                                                    =  (211),
    ELC_EVENT_GPT3_COUNTER_OVERFLOW                                             =  (212),
    ELC_EVENT_GPT3_COUNTER_UNDERFLOW                                            =  (213),
    ELC_EVENT_GPT3_AD_TRIG_A                                                    =  (214),
    ELC_EVENT_GPT3_AD_TRIG_B                                                    =  (215),
    ELC_EVENT_GPT4_CAPTURE_COMPARE_A                                            =  (216),
    ELC_EVENT_GPT4_CAPTURE_COMPARE_B                                            =  (217),
    ELC_EVENT_GPT4_COMPARE_C                                                    =  (218),
    ELC_EVENT_GPT4_COMPARE_D                                                    =  (219),
    ELC_EVENT_GPT4_COMPARE_E                                                    =  (220),
    ELC_EVENT_GPT4_COMPARE_F                                                    =  (221),
    ELC_EVENT_GPT4_COUNTER_OVERFLOW                                             =  (222),
    ELC_EVENT_GPT4_COUNTER_UNDERFLOW                                            =  (223),
    ELC_EVENT_GPT4_AD_TRIG_A                                                    =  (224),
    ELC_EVENT_GPT4_AD_TRIG_B                                                    =  (225),
    ELC_EVENT_GPT5_CAPTURE_COMPARE_A                                            =  (226),
    ELC_EVENT_GPT5_CAPTURE_COMPARE_B                                            =  (227),
    ELC_EVENT_GPT5_COMPARE_C                                                    =  (228),
    ELC_EVENT_GPT5_COMPARE_D                                                    =  (229),
    ELC_EVENT_GPT5_COMPARE_E                                                    =  (230),
    ELC_EVENT_GPT5_COMPARE_F                                                    =  (231),
    ELC_EVENT_GPT5_COUNTER_OVERFLOW                                             =  (232),
    ELC_EVENT_GPT5_COUNTER_UNDERFLOW                                            =  (233),
    ELC_EVENT_GPT5_AD_TRIG_A                                                    =  (234),
    ELC_EVENT_GPT5_AD_TRIG_B                                                    =  (235),
    ELC_EVENT_GPT6_CAPTURE_COMPARE_A                                            =  (236),
    ELC_EVENT_GPT6_CAPTURE_COMPARE_B                                            =  (237),
    ELC_EVENT_GPT6_COMPARE_C                                                    =  (238),
    ELC_EVENT_GPT6_COMPARE_D                                                    =  (239),
    ELC_EVENT_GPT6_COMPARE_E                                                    =  (240),
    ELC_EVENT_GPT6_COMPARE_F                                                    =  (241),
    ELC_EVENT_GPT6_COUNTER_OVERFLOW                                             =  (242),
    ELC_EVENT_GPT6_COUNTER_UNDERFLOW                                            =  (243),
    ELC_EVENT_GPT6_AD_TRIG_A                                                    =  (244),
    ELC_EVENT_GPT6_AD_TRIG_B                                                    =  (245),
    ELC_EVENT_GPT7_CAPTURE_COMPARE_A                                            =  (246),
    ELC_EVENT_GPT7_CAPTURE_COMPARE_B                                            =  (247),
    ELC_EVENT_GPT7_COMPARE_C                                                    =  (248),
    ELC_EVENT_GPT7_COMPARE_D                                                    =  (249),
    ELC_EVENT_GPT7_COMPARE_E                                                    =  (250),
    ELC_EVENT_GPT7_COMPARE_F                                                    =  (251),
    ELC_EVENT_GPT7_COUNTER_OVERFLOW                                             =  (252),
    ELC_EVENT_GPT7_COUNTER_UNDERFLOW                                            =  (253),
    ELC_EVENT_GPT7_AD_TRIG_A                                                    =  (254),
    ELC_EVENT_GPT7_AD_TRIG_B                                                    =  (255),
    ELC_EVENT_GPT8_CAPTURE_COMPARE_A                                            =  (256),
    ELC_EVENT_GPT8_CAPTURE_COMPARE_B                                            =  (257),
    ELC_EVENT_GPT8_COMPARE_C                                                    =  (258),
    ELC_EVENT_GPT8_COMPARE_D                                                    =  (259),
    ELC_EVENT_GPT8_COMPARE_E                                                    =  (260),
    ELC_EVENT_GPT8_COMPARE_F                                                    =  (261),
    ELC_EVENT_GPT8_COUNTER_OVERFLOW                                             =  (262),
    ELC_EVENT_GPT8_COUNTER_UNDERFLOW                                            =  (263),
    ELC_EVENT_GPT9_CAPTURE_COMPARE_A                                            =  (266),
    ELC_EVENT_GPT9_CAPTURE_COMPARE_B                                            =  (267),
    ELC_EVENT_GPT9_COMPARE_C                                                    =  (268),
    ELC_EVENT_GPT9_COMPARE_D                                                    =  (269),
    ELC_EVENT_GPT9_COMPARE_E                                                    =  (270),
    ELC_EVENT_GPT9_COMPARE_F                                                    =  (271),
    ELC_EVENT_GPT9_COUNTER_OVERFLOW                                             =  (272),
    ELC_EVENT_GPT9_COUNTER_UNDERFLOW                                            =  (273),
    ELC_EVENT_GPT10_CAPTURE_COMPARE_A                                           =  (276),
    ELC_EVENT_GPT10_CAPTURE_COMPARE_B                                           =  (277),
    ELC_EVENT_GPT10_COMPARE_C                                                   =  (278),
    ELC_EVENT_GPT10_COMPARE_D                                                   =  (279),
    ELC_EVENT_GPT10_COMPARE_E                                                   =  (280),
    ELC_EVENT_GPT10_COMPARE_F                                                   =  (281),
    ELC_EVENT_GPT10_COUNTER_OVERFLOW                                            =  (282),
    ELC_EVENT_GPT10_COUNTER_UNDERFLOW                                           =  (283),
    ELC_EVENT_GPT11_CAPTURE_COMPARE_A                                           =  (286),
    ELC_EVENT_GPT11_CAPTURE_COMPARE_B                                           =  (287),
    ELC_EVENT_GPT11_COMPARE_C                                                   =  (288),
    ELC_EVENT_GPT11_COMPARE_D                                                   =  (289),
    ELC_EVENT_GPT11_COMPARE_E                                                   =  (290),
    ELC_EVENT_GPT11_COMPARE_F                                                   =  (291),
    ELC_EVENT_GPT11_COUNTER_OVERFLOW                                            =  (292),
    ELC_EVENT_GPT11_COUNTER_UNDERFLOW                                           =  (293),
    ELC_EVENT_GPT12_CAPTURE_COMPARE_A                                           =  (296),
    ELC_EVENT_GPT12_CAPTURE_COMPARE_B                                           =  (297),
    ELC_EVENT_GPT12_COMPARE_C                                                   =  (298),
    ELC_EVENT_GPT12_COMPARE_D                                                   =  (299),
    ELC_EVENT_GPT12_COMPARE_E                                                   =  (300),
    ELC_EVENT_GPT12_COMPARE_F                                                   =  (301),
    ELC_EVENT_GPT12_COUNTER_OVERFLOW                                            =  (302),
    ELC_EVENT_GPT12_COUNTER_UNDERFLOW                                           =  (303),
    ELC_EVENT_GPT13_CAPTURE_COMPARE_A                                           =  (306),
    ELC_EVENT_GPT13_CAPTURE_COMPARE_B                                           =  (307),
    ELC_EVENT_GPT13_COMPARE_C                                                   =  (308),
    ELC_EVENT_GPT13_COMPARE_D                                                   =  (309),
    ELC_EVENT_GPT13_COMPARE_E                                                   =  (310),
    ELC_EVENT_GPT13_COMPARE_F                                                   =  (311),
    ELC_EVENT_GPT13_COUNTER_OVERFLOW                                            =  (312),
    ELC_EVENT_GPT13_COUNTER_UNDERFLOW                                           =  (313),
    ELC_EVENT_OPS_UVW_EDGE                                                      =  (336),
    ELC_EVENT_EPTPC_IPLS                                                        =  (352),
    ELC_EVENT_EPTPC_MINT                                                        =  (353),
    ELC_EVENT_EPTPC_PINT                                                        =  (354),
    ELC_EVENT_EDMAC0_EINT                                                       =  (355),
    ELC_EVENT_EDMAC1_EINT                                                       =  (356),
    ELC_EVENT_EPTPC_TIMER0_RISE                                                 =  (357),
    ELC_EVENT_EPTPC_TIMER1_RISE                                                 =  (358),
    ELC_EVENT_EPTPC_TIMER2_RISE                                                 =  (359),
    ELC_EVENT_EPTPC_TIMER3_RISE                                                 =  (360),
    ELC_EVENT_EPTPC_TIMER4_RISE                                                 =  (361),
    ELC_EVENT_EPTPC_TIMER5_RISE                                                 =  (362),
    ELC_EVENT_EPTPC_TIMER0_FALL                                                 =  (363),
    ELC_EVENT_EPTPC_TIMER1_FALL                                                 =  (364),
    ELC_EVENT_EPTPC_TIMER2_FALL                                                 =  (365),
    ELC_EVENT_EPTPC_TIMER3_FALL                                                 =  (366),
    ELC_EVENT_EPTPC_TIMER4_FALL                                                 =  (367),
    ELC_EVENT_EPTPC_TIMER5_FALL                                                 =  (368),
    ELC_EVENT_USBHS_FIFO_0                                                      =  (369),
    ELC_EVENT_USBHS_FIFO_1                                                      =  (370),
    ELC_EVENT_USBHS_USB_INT_RESUME                                              =  (371),
    ELC_EVENT_SCI0_RXI                                                          =  (372),
    ELC_EVENT_SCI0_TXI                                                          =  (373),
    ELC_EVENT_SCI0_TEI                                                          =  (374),
    ELC_EVENT_SCI0_ERI                                                          =  (375),
    ELC_EVENT_SCI0_AM                                                           =  (376),
    ELC_EVENT_SCI0_RXI_OR_ERI                                                   =  (377),
    ELC_EVENT_SCI1_RXI                                                          =  (378),
    ELC_EVENT_SCI1_TXI                                                          =  (379),
    ELC_EVENT_SCI1_TEI                                                          =  (380),
    ELC_EVENT_SCI1_ERI                                                          =  (381),
    ELC_EVENT_SCI1_AM                                                           =  (382),
    ELC_EVENT_SCI2_RXI                                                          =  (384),
    ELC_EVENT_SCI2_TXI                                                          =  (385),
    ELC_EVENT_SCI2_TEI                                                          =  (386),
    ELC_EVENT_SCI2_ERI                                                          =  (387),
    ELC_EVENT_SCI2_AM                                                           =  (388),
    ELC_EVENT_SCI3_RXI                                                          =  (390),
    ELC_EVENT_SCI3_TXI                                                          =  (391),
    ELC_EVENT_SCI3_TEI                                                          =  (392),
    ELC_EVENT_SCI3_ERI                                                          =  (393),
    ELC_EVENT_SCI3_AM                                                           =  (394),
    ELC_EVENT_SCI4_RXI                                                          =  (396),
    ELC_EVENT_SCI4_TXI                                                          =  (397),
    ELC_EVENT_SCI4_TEI                                                          =  (398),
    ELC_EVENT_SCI4_ERI                                                          =  (399),
    ELC_EVENT_SCI4_AM                                                           =  (400),
    ELC_EVENT_SCI5_RXI                                                          =  (402),
    ELC_EVENT_SCI5_TXI                                                          =  (403),
    ELC_EVENT_SCI5_TEI                                                          =  (404),
    ELC_EVENT_SCI5_ERI                                                          =  (405),
    ELC_EVENT_SCI5_AM                                                           =  (406),
    ELC_EVENT_SCI6_RXI                                                          =  (408),
    ELC_EVENT_SCI6_TXI                                                          =  (409),
    ELC_EVENT_SCI6_TEI                                                          =  (410),
    ELC_EVENT_SCI6_ERI                                                          =  (411),
    ELC_EVENT_SCI6_AM                                                           =  (412),
    ELC_EVENT_SCI7_RXI                                                          =  (414),
    ELC_EVENT_SCI7_TXI                                                          =  (415),
    ELC_EVENT_SCI7_TEI                                                          =  (416),
    ELC_EVENT_SCI7_ERI                                                          =  (417),
    ELC_EVENT_SCI7_AM                                                           =  (418),
    ELC_EVENT_SCI8_RXI                                                          =  (420),
    ELC_EVENT_SCI8_TXI                                                          =  (421),
    ELC_EVENT_SCI8_TEI                                                          =  (422),
    ELC_EVENT_SCI8_ERI                                                          =  (423),
    ELC_EVENT_SCI8_AM                                                           =  (424),
    ELC_EVENT_SCI9_RXI                                                          =  (426),
    ELC_EVENT_SCI9_TXI                                                          =  (427),
    ELC_EVENT_SCI9_TEI                                                          =  (428),
    ELC_EVENT_SCI9_ERI                                                          =  (429),
    ELC_EVENT_SCI9_AM                                                           =  (430),
    ELC_EVENT_SPI0_RXI                                                          =  (444),
    ELC_EVENT_SPI0_TXI                                                          =  (445),
    ELC_EVENT_SPI0_IDLE                                                         =  (446),
    ELC_EVENT_SPI0_ERI                                                          =  (447),
    ELC_EVENT_SPI0_TEI                                                          =  (448),
    ELC_EVENT_SPI1_RXI                                                          =  (449),
    ELC_EVENT_SPI1_TXI                                                          =  (450),
    ELC_EVENT_SPI1_IDLE                                                         =  (451),
    ELC_EVENT_SPI1_ERI                                                          =  (452),
    ELC_EVENT_SPI1_TEI                                                          =  (453),
    ELC_EVENT_QSPI_INT                                                          =  (454),
    ELC_EVENT_SDHIMMC0_ACCS                                                     =  (455),
    ELC_EVENT_SDHIMMC0_SDIO                                                     =  (456),
    ELC_EVENT_SDHIMMC0_CARD                                                     =  (457),
    ELC_EVENT_SDHIMMC0_DMA_REQ                                                  =  (458),
    ELC_EVENT_SDHIMMC1_ACCS                                                     =  (459),
    ELC_EVENT_SDHIMMC1_SDIO                                                     =  (460),
    ELC_EVENT_SDHIMMC1_CARD                                                     =  (461),
    ELC_EVENT_SDHIMMC1_DMA_REQ                                                  =  (462),
    ELC_EVENT_SCE_PROC_BUSY                                                     =  (481),
    ELC_EVENT_SCE_ROMOK                                                         =  (482),
    ELC_EVENT_SCE_LONG_PLG                                                      =  (483),
    ELC_EVENT_SCE_TEST_BUSY                                                     =  (484),
    ELC_EVENT_SCE_WRRDY_0                                                       =  (485),
    ELC_EVENT_SCE_WRRDY_1                                                       =  (486),
    ELC_EVENT_SCE_WRRDY_4                                                       =  (487),
    ELC_EVENT_SCE_RDRDY_0                                                       =  (488),
    ELC_EVENT_SCE_RDRDY_1                                                       =  (489),
    ELC_EVENT_SCE_INTEGRATE_WRRDY                                               =  (490),
    ELC_EVENT_SCE_INTEGRATE_RDRDY                                               =  (491),
    ELC_EVENT_GLCDC_LINE_DETECT                                                 =  (506),
    ELC_EVENT_GLCDC_UNDERFLOW_1                                                 =  (507),
    ELC_EVENT_GLCDC_UNDERFLOW_2                                                 =  (508),
    ELC_EVENT_DRW_INT                                                           =  (509),
    ELC_EVENT_JPEG_JEDI                                                         =  (510),
    ELC_EVENT_JPEG_JDTI                                                         =  (511),
} elc_event_t;

#endif /* BSP_ELCDEFS_H_ */

/** @} (end addtogroup BSP_MCU_S7G2) */
