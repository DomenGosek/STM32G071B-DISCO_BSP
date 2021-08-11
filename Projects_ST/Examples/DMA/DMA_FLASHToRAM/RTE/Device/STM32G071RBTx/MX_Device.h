/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 09/08/2021 12:44:00
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            8000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_SYSCLKFreq_VALUE                     64000000
#define MX_HCLKFreq_Value                       64000000
#define MX_FCLKCortexFreq_Value                 64000000
#define MX_CortexFreq_Value                     64000000
#define MX_AHBFreq_Value                        64000000
#define MX_APBFreq_Value                        64000000
#define MX_CECFreq_Value                        32786
#define MX_I2S1Freq_Value                       64000000
#define MX_PWRFreq_Value                        64000000
#define MX_RTCFreq_Value                        32000
#define MX_USBFreq_Value                        16000000
#define MX_WatchDogFreq_Value                   32000
#define MX_MCO1PinFreq_Value                    64000000
#define MX_TIM1Freq_Value                       64000000
#define MX_LPUART1Freq_Value                    64000000
#define MX_TIM15Freq_Value                      64000000
#define MX_LPTIM2Freq_Value                     64000000
#define MX_USART1Freq_Value                     64000000
#define MX_LPTIM1Freq_Value                     64000000
#define MX_ADCFreq_Value                        64000000
#define MX_APBTimFreq_Value                     64000000
#define MX_SYSCLKFreq_VALUE1                    64
#define MX_SYSCLKFreq_VALUE2                    64
#define MX_USART2Freq_Value                     64000000
#define MX_I2C1Freq_Value                       64000000

/*-------------------------------- DMA        --------------------------------*/

#define MX_DMA                                  1

/* DMA Configuration */

/* DMA DMA1_Channel1 */
#define MX_DMA1_Channel1_DMA_Instance           DMA1_Channel1
#define MX_DMA1_Channel1_DMA_Priority           DMA_PRIORITY_LOW
#define MX_DMA1_Channel1_DMA_MemDataAlignment   DMA_MDATAALIGN_WORD
#define MX_DMA1_Channel1_DMA_Mode               DMA_NORMAL
#define MX_DMA1_Channel1_DMA_SyncRequestNumber  1
#define MX_DMA1_Channel1_DMA_Request            DMA_REQUEST_MEM2MEM
#define MX_DMA1_Channel1_DMA_SyncPolarity       HAL_DMAMUX_SYNC_NO_EVENT
#define MX_DMA1_Channel1_DMA_Direction          DMA_MEMORY_TO_MEMORY
#define MX_DMA1_Channel1_DMA_SignalID           NONE
#define MX_DMA1_Channel1_DMA_MemInc             DMA_MINC_ENABLE
#define MX_DMA1_Channel1_DMA_IpInstance
#define MX_DMA1_Channel1_DMA_RequestNumber      1
#define MX_DMA1_Channel1_DMA_EventEnable        DISABLE
#define MX_DMA1_Channel1_DMA_SyncEnable         DISABLE
#define MX_DMA1_Channel1_DMA_DMA_Handle
#define MX_DMA1_Channel1_DMA_PeriphDataAlignment DMA_PDATAALIGN_WORD
#define MX_DMA1_Channel1_DMA_Polarity           HAL_DMAMUX_REQ_GEN_RISING
#define MX_DMA1_Channel1_DMA_SyncSignalID       NONE
#define MX_DMA1_Channel1_DMA_PeriphInc          DMA_PINC_ENABLE

/* NVIC Configuration */

/* NVIC DMA1_Channel1_IRQn */
#define MX_DMA1_Channel1_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Channel1_IRQn_Subriority        0

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

#endif  /* __MX_DEVICE_H */

