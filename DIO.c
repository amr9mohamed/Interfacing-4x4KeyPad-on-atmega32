/*
 * DIO.c
 *
 * Created: 10/15/2017 1:28:36 PM
 *  Author: Amr
 */ 

#include "types.h"
#include "PortDefinetions.h"
#include "DIO.h"

//static volatile u8_t* PortDirectionArray[] = {&DDRA, &DDRB, &DDRC, &DDRD};
static volatile u8_t* PortValueArray[] = {&PORTA, &PORTB, &PORTC, &PORTD};
static volatile u8_t* PortInputArray[] = {&PINA, &PINB, &PINC, &PIND};

 void DIO_Initialize()
{
	//DDRx initialization
	DDRA = PortAInitDir;
	DDRB = PortBInitDir;
	DDRC = PortCInitDir;
	DDRD = PortDInitDir;
	//PORTx initialization
	PORTA = PortAInitVal;
	PORTB = PortBInitVal;
	PORTC = PortCInitVal;
	PORTD = PortDInitVal;
}

void DIO_SetPortValue(u8_t port, u8_t mask,u8_t value)
{
	if ( (port >= PA) && (port <= PD) ) 
	{
		*(PortValueArray[port]) &= mask;//mask is used to protect what i don't want to change by anding with 1 s
		*(PortValueArray[port]) |= value;
	} 
	else
	{
		;
	}
}

void DIO_SetBitValue(u8_t port, Bit_Number number, Bit_State state)
{
	if ( (port >= PA) && (port <= PD) )
	{
		if ( (number >= ZERO) && (number <= SEVEN) )
		{
			switch (state)
			{
			case RESET:
				*(PortValueArray[port]) &= ~(1<<number);
				break;
			case SET:
				*(PortValueArray[port]) |= (1<<number);
				break;
			default:
				break;
			}
		} 
		else
		{
			;
		}
	}
	else
	{
		;
	}
}

u8_t DIO_GetPinInputValue(u8_t port, Bit_Number number)
{
	if ( (port >= PA) && (port <= PD) )
	{
		if ( (number >= ZERO) && (number <= SEVEN) )
		{
			return *(PortInputArray[port]) & (1<<number);
		}
		else
		{
			;
		}
	}
	else
	{
		;
	}
	return 0;
}
