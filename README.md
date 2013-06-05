ATmega32-Arduino
================

ATmega32 for Arduino IDE v1.1

********************************
 Installing ATmega32
********************************
0. Close the Arduino IDE (all instances).
1. Copy the Mega32 folder to the Sketchbook \hardware folder. If one does not exist create it.
2. Start the Arduino IDE.
3. Select any ATmega32-1mhz or ATmega32-8mhz board from the Tools->Board menu.
6. Now, you can compile any standard project.

********************************
Pin Numbers
********************************
                          +---\/---+
 	   (XCK/T0) D0 PB0  01|        |40  PA0 AI7 D31 (ADC0)
 	       (T1) D1 PB1  02|        |39  PA1 AI6 D30 (ADC1)
 	(INT2/AIN0) D2 PB2  03|        |38  PA2 AI5 D29 (ADC2)
 	 (OC0/AIN1) D3 PB3  04|        |37  PA3 AI4 D28 (ADC3)
	       (SS) D4 PB4  05|        |36  PA4 AI3 D27 (ADC4)
	     (MOSI) D5 PB5  06|        |35  PA5 AI2 D26 (ADC5)
	     (MISO) D6 PB6  07|        |34  PA6 AI1 D25 (ADC6)
	      (SCK) D7 PB7  08|        |33  PA7 AI0 D24 (ADC7)
                 RESET  09|        |32  AREF
                   VCC  10|        |31  GND
                   GND  11|        |30  AVCC
                 XTAL2  12|        |29  PC7 D23 (TOSC2)
                 XTAL1  13|        |28  PC6 D22 (TOSC1)
          (RXD) D8 PD0  14|        |27  PC5 D21 (TDI)
          (TXD) D9 PD1  15|        |26  PC4 D20 (TDO)
        (INT0) D10 PD2  16|        |25  PC3 D19 (TMS)
        (INT1) D11 PD3  17|        |24  PC2 D18 (TCK)
        (OC1B) D12 PD4  18|        |23  PC1 D17 (SDA)
        (OC1A) D13 PD5  19|        |22  PC0 D16 (SCL)
        (ICP1) D14 PD6  20|        |21  PD7 D15 (OC2)
                          +--------+