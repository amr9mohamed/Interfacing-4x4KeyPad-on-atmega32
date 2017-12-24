/*
 * HAL.h
 *
 * Created: 10/15/2017 2:15:54 PM
 *  Author: Amr
 */ 


#ifndef HAL_H_
#define HAL_H_


/************************************************************************/
/*                           configuration                              */
/************************************************************************/
#define SevSegPort PC
#define SevSegInitVal 0x00
#define KeypadPort PD
#define ROWS 4
#define COLUMNS 4


/************************************************************************/
/*                            prototypes                                */
/************************************************************************/
void HAL_SevSegInit();
void HAL_KeypadInit();
void HAL_SetSevSegVal(u8_t value);
#define HAL_SevSegEn1()  DIO_SetBitValue(SevSegPort,TWO,SET)
#define HAL_SevSegDis1() DIO_SetBitValue(SevSegPort,TWO,RESET)
#define HAL_SevSegEn2()  DIO_SetBitValue(SevSegPort,THREE,SET)
#define HAL_SevSegDis2() DIO_SetBitValue(SevSegPort,THREE,RESET)

#endif /* HAL_H_ */