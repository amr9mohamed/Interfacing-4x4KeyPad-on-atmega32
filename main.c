/*
 * InterfacingKeypad.c
 *
 * Created: 10/15/2017 1:06:08 PM
 * Author : Amr
 */ 

#include "types.h"
#include "PortDefinetions.h"
#include "DIO.h"
#include "HAL.h"
#define F_CPU 8000000UL
#include <util/delay.h>

extern u8_t keypadArray4x4[ROWS][COLUMNS];
extern u8_t keypadArraySIM[ROWS][COLUMNS];

int main(void)
{
    DIO_Initialize();
	HAL_SevSegInit();
	HAL_SevSegEn1();
    while (1) 
    {
		u8_t i,j;
		for (i = ZERO; i <= THREE; i++)//Columns
		{
			DIO_SetBitValue(KeypadPort,i,RESET);
			for (j = FOUR; j <= SEVEN; j++)//Rows
			{
				if (DIO_GetPinInputValue(KeypadPort,j) == 0)
				{
					HAL_SetSevSegVal(keypadArray4x4[j-4][i]);
				} 
				else
				{
					;
				}
			}
			DIO_SetBitValue(KeypadPort,i,SET);
			_delay_ms(10);
		}
    }
	return 0;
}

