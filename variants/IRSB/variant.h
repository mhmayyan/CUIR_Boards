/*
 *******************************************************************************
 * Copyright (c) 2017, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
  #define PA10 0 //D0      RX UART1
  #define PA9  1  //D1      TX UART1
  #define PA11 2 //D2 USB_DM
  #define PA12 3 //D3 USB_DP
  #define PA13 4 //D4      D6_SWDIO
  #define PA14 5 //D5      D9_SWCLK
  #define PA15 6 //D6      RADIO_NSS    Murata internal
  #define PB3  7 //D7
  #define PB4  8  //D8     I2C3_SDA
  #define PB5  9  //D9
  #define PB6  10  //D10      I2C_SCL
  #define PB7  11   //D11     I2C_SDA
  #define PA8  12  //D12   I2C3_SCL
  #define PC14 13  //D13
  #define PC15 14  //D14
  #define PA7  15  //D15      MOSI
  #define PA6  16  //D16      MISO
  #define PA5  17  //D17      SCK
  #define PA4  18  //D18      NSS
  #define PA3  19  //D19      RX UART2
  #define PA2  20  //D20      tX UART2
  #define PA1  21  //D21      RX UART4
  #define PA0  22  //D22      tX UART4
  #define PB0  23  //D23   A0
  #define PB1  24  //D24   A1




// This must be a literal
#define NUM_DIGITAL_PINS        25

// This must be a literal with a value less than or equal to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       2
#define NUM_ANALOG_FIRST        23

// On-board LED pin number
#define LED_BUILTIN             13
// #define LED_GREEN               LED_BUILTIN


#define _SPI_MOSI  PA7//15//PA7
#define _SPI_MISO  PA6//16//PA6
#define _SPI_SCK   PA5//17//PA5
#define _SPI_NSS   PA4//18//PA4
// #define SPI_MOSI_PIN  PA7
// #define SPI_MISO_PIN  PA6
// #define SPI_SCK_PIN   PA5
// #define SPI_NSS_PIN   PA4

#define I2C3_SDA  PB4  //D8
#define PIN_WIRE_SCL  PB6  //D10    I2C1_SCL
#define PIN_WIRE_SDA  PB7   //D11   I2C1_SDA
#define I2C3_SCL  PA8  //D12

// On-board user button
// #define USER_BTN                PC13

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#define TIMER_TONE              TIM3
#define TIMER_SERVO             TIM2

// UART Definitions. The default USART used for Serial
#define SERIAL_UART_INSTANCE    1 //ex: 2 for Serial2 (USART2)

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           0
#define PIN_SERIAL_TX           1

/* Extra HAL modules */
// #define HAL_DAC_MODULE_ENABLED

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR     Serial
#define SERIAL_PORT_HARDWARE    Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
