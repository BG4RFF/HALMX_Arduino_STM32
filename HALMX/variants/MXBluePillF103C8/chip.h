/* stub for hardware types */
#ifndef _CHIP_MXBluePillF103C8_
#define _CHIP_MXBluePillF103C8_

#include <stdbool.h>  /* for wiring constants */

#include "stm32f1xx_hal.h"  /* Ideally this is defined in variant */
//#include "usart.h"

/* define some abstractions that are identical to Arduino */

/* from STM boilerplate: 
			Systick timer is used by default as source of time base, but user 
            can eventually implement his proper time base source (a general purpose 
            timer for example or other time source), keeping in mind that Time base 
            duration should be kept 1ms since PPP_TIMEOUT_VALUEs are defined and 
            handled in milliseconds basis.
*/
/* returns System clock milliseconds HAL must be active */
#define  millis(a1) HAL_GetTick(a1) 

/* from STM boilerplate: 
			Care must be taken if HAL_Delay() is called from a 
             peripheral ISR process, the Tick interrupt line must have higher priority 
            (numerically lower) than the peripheral interrupt. Otherwise the caller 
            ISR process will be blocked. 
*/
/* delay in micoseconds  Uses HAL system clock */
#define delay(a2) HAL_Delay(a2)


/**
 *     12 April 2016 by Vassilis Serasidis
 */
//Comment out the Serial port you need to use.
#define CDC_SERIAL_BUFFER_SIZE  128 //USBSerial buffer data length

#define USBDP_PIN PA12 //USB Plus (+) pin number. That pin is normally pulled up to 3.3v by a 1.5k resistor
#define USE_USBSerial

#define USE_USART1
#define USE_USART2
//#define USE_USART3

//Comment out the SPI port you need to use.
#define USE_SPI1
#define USE_SPI2
/********************************************************/
 
//The number of I2C ports that has the STM32F103C8 MCU.
#define BOARD_NR_I2C 2
#define HAL_I2C1 I2C1
#define HAL_I2C2 I2C2
#define HAL_I2C3 I2C3

//Number of Analog-to-Digital-Converter (ADC) pins that has the STM32F103C8 MCU
#define BOARD_NR_ADC_PINS 9 //The STM32F103C8 has 9 Analog inputs.

//Number of Pulse-Width-Modulation (PWM) pins that has the STM32F103C8 MCU
#define BOARD_NR_PWM_PINS 12

//Include this line if the disconnect pin is used (The maple mini uses the DISC pin PB9).
#define USB_DISC_PIN PB9

#define HAL_GPIOB GPIOB

#endif