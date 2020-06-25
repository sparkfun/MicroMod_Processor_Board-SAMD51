/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

/*
 * Pins descriptions
 */

//TCC0 IOSET 6
//TCC1 IOSET 1
//TC0 IOSET 1
//TC1 IOSET 1
//TC2 IOSET 2
//TC3 IOSET 1
//TC4 IOSET 1
const PinDescription g_APinDescription[]=

  // 0..13 - Digital pins
  // ----------------------
  // ulPort, ulPIn, ulPinType, ulPintAttribute, ulADCChannelNumber, ulPWMChannel, ulTCChannel, ulEXTINT
  { PORTA, 14, PIO_DIGITAL, PIN_ATTR_PWM_F,  No_ADC_Channel, TCC2_CH0,   TC3_CH0,      EXTERNAL_INT_14 },  //0  
  { PORTA, 15, PIO_DIGITAL, PIN_ATTR_PWM_F,  No_ADC_Channel, TCC2_CH1,   TC3_CH1,      EXTERNAL_INT_15 },  //1 
  { PORTA, 18, PIO_DIGITAL, PIN_ATTR_PWM_F,  No_ADC_Channel, TCC1_CH2,   TC3_CH0,      EXTERNAL_INT_2 },   //2
  { PORTA, 19, PIO_DIGITAL, PIN_ATTR_PWM_F,  No_ADC_Channel, TCC1_CH3,   TC3_CH1,      EXTERNAL_INT_3 },   //3
  { PORTA, 27, PIO_DIGITAL, PIN_ATTR_PWM_F,  No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 },  //4
  { PORTB, 31, PIO_DIGITAL, PIN_ATTR_PWM_F,  No_ADC_Channel, TCC4_CH1,   TC0_CH0,      EXTERNAL_INT_15  }, //5
  { PORTB, 30, PIO_DIGITAL, PIN_ATTR_PWM_F,  No_ADC_Channel, TCC0_CH0,   TC7_CH0,      EXTERNAL_INT_14 },  //6
  { PORTB, 17, PIO_DIGITAL, PIN_ATTR_PWM_F,  No_ADC_Channel, TCC3_CH1,   TC6_CH1,      EXTERNAL_INT_1 },   //7
  { PORTB, 13, PIO_DIGITAL, PIN_ATTR_PWM_F,  No_ADC_Channel, NOT_ON_PWM, TC4_CH1,      EXTERNAL_INT_13 },  //8
  { PORTB, 16, PIO_DIGITAL, PIN_ATTR_PWM_F,  No_ADC_Channel, TCC3_CH0,   TC6_CH1,      EXTERNAL_INT_1 },   //9 3.3V_EN

  // Analog Pins
  { PORTA,  2, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel0,    NOT_ON_PWM,   NOT_ON_TIMER, EXTERNAL_INT_2 },    //9 - A0
  { PORTB,  5, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel7, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5 },         //10 - A1
  { PORTB,  9, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel3, TC4_CH1, TC4_CH1, EXTERNAL_INT_9 },//11 - A2
  { PORTB,  8, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel2, TC4_CH0, TC4_CH0, EXTERNAL_INT_8 },//12 - A3

  // 13 (LED)
  { PORTA, 23, PIO_DIGITAL, PIN_ATTR_PWM_G, No_ADC_Channel, TCC0_CH3, TC4_CH1, EXTERNAL_INT_7 },              // 13

  // More Analog
  { PORTB,  6, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel8, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6 },         //14 - A4
  { PORTB,  4, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel6, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_4 },         //15 - A5
  { PORTB,  7, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel9, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7 },         //16 - A6


  // USB
  { NOT_A_PORT, 0, PIO_NOT_A_PIN, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB Host enable DOES NOT EXIST ON THIS BOARD
  { PORTA, 24, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB/DM
  { PORTA, 25, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB/DP

  // UART
  { PORTB, 22, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // TXO
  { PORTB, 23, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // RXI

  // CAN BUS
  { PORTB, 14, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // TXO
  { PORTB, 15, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // RXI

  // I2C pins (SDA/SCL)
  // ----------------------
  { PORTA, 16, PIO_SERCOM, PIN_ATTR_PWM_G, No_ADC_Channel, TC4_CH0, TC4_CH0, EXTERNAL_INT_6 }, // SDA
  { PORTA, 17, PIO_SERCOM, PIN_ATTR_PWM_G, No_ADC_Channel, TC4_CH1, TC4_CH1, EXTERNAL_INT_7 }, // SCL

  // I2C1 (SDA1/SCL1) 
  { PORTA, 12, PIO_SERCOM, PIN_ATTR_PWM_G, No_ADC_Channel, TC4_CH0, TC4_CH0, EXTERNAL_INT_6 }, // SDA1
  { PORTA, 13, PIO_SERCOM, PIN_ATTR_PWM_G, No_ADC_Channel, TC4_CH1, TC4_CH1, EXTERNAL_INT_7 }, // SCL2

  // I2S (WS,SDO,SDI,CLK)
  { PORTA, 20, PIO_SERCOM, PIN_ATTR_PWM_G, No_ADC_Channel, TC4_CH0, TC4_CH0, EXTERNAL_INT_6 }, // WS
  { PORTA, 21, PIO_SERCOM, PIN_ATTR_PWM_G, No_ADC_Channel, TC4_CH1, TC4_CH1, EXTERNAL_INT_7 }, // SDO
  { PORTA, 22, PIO_SERCOM, PIN_ATTR_PWM_G, No_ADC_Channel, TC4_CH1, TC4_CH1, EXTERNAL_INT_7 }, // SDI
  { PORTB, 12, PIO_SERCOM, PIN_ATTR_PWM_G, No_ADC_Channel, TC4_CH1, TC4_CH1, EXTERNAL_INT_7 }, // SDI

  // SPI (MOSI,MISO,SCK,CS)
  { PORTA,  4, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 }, // MOSI
  { PORTA,  5, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_12 }, // MISO
  { PORTA,  6, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_13 }, // SCK
  { PORTA,  7, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_13 }, // CS

  // SPI1 (MOSI1,MISO1,SCK1,CS1)
  { PORTB,  0, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 }, // MOSI1
  { PORTB,  1, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_12 }, // MISO1
  { PORTB,  2, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_13 }, // SCK1
  { PORTB,  3, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_13 }, // CS1

  // QSPI for Flash (DAT0, DAT1, DAT2, DAT3)
  { PORTA,  8, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, //DAT0
  { PORTA,  9, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, //DAT1
  { PORTA, 10, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, //DAT2
  { PORTA, 11, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, //DAT3

  // 30 (AREF)
  { PORTA,  3, PIO_ANALOG, PIN_ATTR_ANALOG, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // DAC/VREFP

  // Alternate use of pins - DAC
  { PORTA,  2, PIO_ANALOG, PIN_ATTR_ANALOG, DAC_Channel0,   NOT_ON_PWM,   NOT_ON_TIMER, EXTERNAL_INT_2 },         //9 - A0
  { PORTA,  5, PIO_ANALOG, PIN_ATTR_ANALOG, DAC_Channel1,   NOT_ON_PWM,   NOT_ON_TIMER, EXTERNAL_INT_5 },         //9 - A0


} ;

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TCC3, TCC4, TC0, TC1, TC2, TC3, TC4, TC5 } ;
const uint32_t GCLK_CLKCTRL_IDs[TCC_INST_NUM+TC_INST_NUM] = { TCC0_GCLK_ID, TCC1_GCLK_ID, TCC2_GCLK_ID, TCC3_GCLK_ID, TCC4_GCLK_ID, TC0_GCLK_ID, TC1_GCLK_ID, TC2_GCLK_ID, TC3_GCLK_ID, TC4_GCLK_ID, TC5_GCLK_ID } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;
SERCOM sercom4( SERCOM4 ) ;
SERCOM sercom5( SERCOM5 ) ;

Uart Serial1( &sercom2, PIN_SERIAL1_RX, PIN_SERIAL1_TX, PAD_SERIAL1_RX, PAD_SERIAL1_TX ) ;

void SERCOM2_0_Handler()
{
  Serial1.IrqHandler();
}
void SERCOM2_1_Handler()
{
  Serial1.IrqHandler();
}
void SERCOM2_2_Handler()
{
  Serial1.IrqHandler();
}
void SERCOM2_3_Handler()
{
  Serial1.IrqHandler();
}
