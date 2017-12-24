/*
 * PortDefinetions.h
 *
 * Created: 10/15/2017 1:08:07 PM
 *  Author: Amr
 */ 


#ifndef PORTDEFINETIONS_H_
#define PORTDEFINETIONS_H_

//PortA
#define PORTA    *((volatile u8_t*) (0x3B))
#define DDRA     *((volatile u8_t*) (0x3A))
#define PINA     *((volatile u8_t*) (0x39))

//PortB
#define PORTB    *((volatile u8_t*) (0x38))
#define DDRB     *((volatile u8_t*) (0x37))
#define PINB     *((volatile u8_t*) (0x36))

//PortC
#define PORTC    *((volatile u8_t*) (0x35))
#define DDRC     *((volatile u8_t*) (0x34))
#define PINC     *((volatile u8_t*) (0x33))

//PortD
#define PORTD    *((volatile u8_t*) (0x32))
#define DDRD     *((volatile u8_t*) (0x31))
#define PIND     *((volatile u8_t*) (0x30))

//Port Numbering
#define PA 0
#define PB 1
#define PC 2
#define PD 3


#endif /* PORTDEFINETIONS_H_ */