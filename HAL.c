/*
 * HAL.c
 *
 * Created: 10/15/2017 2:19:32 PM
 *  Author: Amr
 */ 

#include "types.h"
#include "PortDefinetions.h"
#include "DIO.h"
#include "HAL.h"

u8_t keypadArray4x4[ROWS][COLUMNS]={{'0','0','0','0'},
 								    {'0','9','8','7'},
 								    {'0','6','5','4'},
 								    {'0','3','2','1'}};//to be characters 
 								    
u8_t keypadArraySIM[ROWS][COLUMNS]={{7,8,9,0},
									{4,5,6,0},
									{1,2,3,0},
									{0,0,0,0}};
	
void HAL_SevSegInit()
{
	DIO_SetPortValue(SevSegPort,0x0F,SevSegInitVal);
}

void HAL_SetSevSegVal(u8_t value)
{
	DIO_SetPortValue(SevSegPort,0x0F,value<<4);
}
