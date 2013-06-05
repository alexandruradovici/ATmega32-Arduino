/*
    Author:		Eric Conner
	Email:		Eric@EricConnerApps.com
    Date:		06-04-2013
    Project:	ATmega32 for Arduino IDE
    Version:	v1.0
*/

#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <avr/pgmspace.h>

#ifdef ARDUINO_MAIN

/*
					 ATMEL ATmega32

                       +---\/---+
	   (XCK/T0) PB0  01|        |40  PA0 (ADC0)
	       (T1) PB1  02|        |39  PA1 (ADC1)
	(INT2/AIN0) PB2  03|        |38  PA2 (ADC2)
	 (OC0/AIN1) PB3  04|        |37  PA3 (ADC3)
	       (SS) PB4  05|        |36  PA4 (ADC4)
	     (MOSI) PB5  06|        |35  PA5 (ADC5)
	     (MISO) PB6  07|        |34  PA6 (ADC6)
	      (SCK) PB7  08|        |33  PA7 (ADC7)
	          RESET  09|        |32  AREF
	            VCC  10|        |31  GND
                GND  11|        |30  AVCC
              XTAL2  12|        |29  PC7 (TOSC2)
              XTAL1  13|        |28  PC6 (TOSC1)
          (RXD) PD0  14|        |27  PC5 (TDI)
          (TXD) PD1  15|        |26  PC4 (TDO)
         (INT0) PD2  16|        |25  PC3 (TMS)
         (INT1) PD3  17|        |24  PC2 (TCK)
         (OC1B) PD4  18|        |23  PC1 (SDA)
         (OC1A) PD5  19|        |22  PC0 (SCL)
         (ICP1) PD6  20|        |21  PD7 (OC2)
                       +--------+
*/

const uint16_t PROGMEM port_to_mode_PGM[] = {
	NOT_A_PORT,
	(uint16_t) &DDRA,
	(uint16_t) &DDRB,
	(uint16_t) &DDRC,
	(uint16_t) &DDRD,
};

const uint16_t PROGMEM port_to_output_PGM[] = {
	NOT_A_PORT,
	(uint16_t) &PORTA,
	(uint16_t) &PORTB,
	(uint16_t) &PORTC,
	(uint16_t) &PORTD,
};

const uint16_t PROGMEM port_to_input_PGM[] = {
	NOT_A_PIN,
	(uint16_t) &PINA,
	(uint16_t) &PINB,
	(uint16_t) &PINC,
	(uint16_t) &PIND,
};

const uint8_t PROGMEM digital_pin_to_port_PGM[] = {	
	PA,	// PA0 ** 0 ** A0
	PA,	// PA1 ** 1 ** A1
	PA,	// PA2 ** 2 ** A2
	PA,	// PA3 ** 3 ** A3
	PA,	// PA4 ** 4 ** A4
	PA,	// PA5 ** 5 ** A5
	PA,	// PA6 ** 6 ** A6
	PA,	// PA7 ** 7 ** A7
	PB,	// PB0 ** 8 ** D0
	PB,	// PB1 ** 9 ** D1
	PB,	// PB2 ** 10 ** D2
	PB,	// PB3 ** 11 ** D3
	PB,	// PB4 ** 12 ** D4
	PB,	// PB5 ** 13 ** D5
	PB,	// PB6 ** 14 ** D6
	PB,	// PB7 ** 15 ** D7
	PC,	// PC0 ** 16 ** D8
	PC,	// PC1 ** 17 ** D9
	PC,	// PC2 ** 18 ** D10
	PC,	// PC3 ** 19 ** D11
	PC,	// PC4 ** 20 ** D12
	PC,	// PC5 ** 21 ** D13
	PC,	// PC6 ** 22 ** D14
	PC,	// PC7 ** 23 ** D15
	PD,	// PD0 ** 24 ** D16
	PD,	// PD1 ** 25 ** D17
	PD,	// PD2 ** 26 ** D18
	PD,	// PD3 ** 27 ** D19
	PD,	// PD4 ** 28 ** D20
	PD,	// PD5 ** 29 ** D21
	PD,	// PD6 ** 20 ** D22
	PD,	// PD7 ** 31 ** D23
};

const uint8_t PROGMEM digital_pin_to_bit_mask_PGM[] = {	
	_BV( 0 ),	// PA0 ** 0 ** A0
	_BV( 1 ),	// PA1 ** 1 ** A1
	_BV( 2 ),	// PA2 ** 2 ** A2
	_BV( 3 ),	// PA3 ** 3 ** A3
	_BV( 4 ),	// PA4 ** 4 ** A4
	_BV( 5 ),	// PA5 ** 5 ** A5
	_BV( 6 ),	// PA6 ** 6 ** A6
	_BV( 7 ),	// PA7 ** 7 ** A7
	_BV( 0 ),	// PB0 ** 8 ** D0
	_BV( 1 ),	// PB1 ** 9 ** D1
	_BV( 1 ),	// PB2 ** 10 ** D2
	_BV( 2 ),	// PB3 ** 11 ** D3
	_BV( 3 ),	// PB4 ** 12 ** D4
	_BV( 4 ),	// PB5 ** 13 ** D5
	_BV( 5 ),	// PB6 ** 14 ** D6
	_BV( 6 ),	// PB7 ** 15 ** D7
	_BV( 0 ),	// PC0 ** 16 ** D8
	_BV( 1 ),	// PC1 ** 17 ** D9
	_BV( 2 ),	// PC2 ** 18 ** D10
	_BV( 3 ),	// PC3 ** 19 ** D11
	_BV( 4 ),	// PC4 ** 20 ** D12
	_BV( 5 ),	// PC5 ** 21 ** D13
	_BV( 6 ),	// PC6 ** 22 ** D14
	_BV( 7 ),	// PC7 ** 23 ** D15
	_BV( 0 ),	// PD0 ** 24 ** D16
	_BV( 1 ),	// PD1 ** 25 ** D17
	_BV( 2 ),	// PD2 ** 26 ** D18
	_BV( 3 ),	// PD3 ** 27 ** D19
	_BV( 4 ),	// PD4 ** 28 ** D20
	_BV( 5 ),	// PD5 ** 29 ** D21
	_BV( 6 ),	// PD6 ** 20 ** D22
	_BV( 7 ),	// PD7 ** 31 ** D23
};

// Need to Add Timer Info
const uint8_t PROGMEM digital_pin_to_timer_PGM[] = {
	NOT_ON_TIMER,	// PA0 ** 0 ** A0
	NOT_ON_TIMER,	// PA1 ** 1 ** A1
	NOT_ON_TIMER,	// PA2 ** 2 ** A2
	NOT_ON_TIMER,	// PA3 ** 3 ** A3
	NOT_ON_TIMER,	// PA4 ** 4 ** A4
	NOT_ON_TIMER,	// PA5 ** 5 ** A5
	NOT_ON_TIMER,	// PA6 ** 6 ** A6
	NOT_ON_TIMER,	// PA7 ** 7 ** A7
	NOT_ON_TIMER,	// PB0 ** 8 ** D0
	NOT_ON_TIMER,	// PB1 ** 9 ** D1
	NOT_ON_TIMER,	// PB2 ** 10 ** D2
	NOT_ON_TIMER,	// PB3 ** 11 ** D3
	NOT_ON_TIMER,	// PB4 ** 12 ** D4
	NOT_ON_TIMER,	// PB5 ** 13 ** D5
	NOT_ON_TIMER,	// PB6 ** 14 ** D6
	NOT_ON_TIMER,	// PB7 ** 15 ** D7
	NOT_ON_TIMER,	// PC0 ** 16 ** D8
	NOT_ON_TIMER,	// PC1 ** 17 ** D9
	NOT_ON_TIMER,	// PC2 ** 18 ** D10
	NOT_ON_TIMER,	// PC3 ** 19 ** D11
	NOT_ON_TIMER,	// PC4 ** 20 ** D12
	NOT_ON_TIMER,	// PC5 ** 21 ** D13
	NOT_ON_TIMER,	// PC6 ** 22 ** D14
	NOT_ON_TIMER,	// PC7 ** 23 ** D15
	NOT_ON_TIMER,	// PD0 ** 24 ** D16
	NOT_ON_TIMER,	// PD1 ** 25 ** D17
	NOT_ON_TIMER,	// PD2 ** 26 ** D18
	NOT_ON_TIMER,	// PD3 ** 27 ** D19
	NOT_ON_TIMER,	// PD4 ** 28 ** D20
	NOT_ON_TIMER,	// PD5 ** 29 ** D21
	NOT_ON_TIMER,	// PD6 ** 20 ** D22
	NOT_ON_TIMER,	// PD7 ** 31 ** D23
};

#endif
#endif