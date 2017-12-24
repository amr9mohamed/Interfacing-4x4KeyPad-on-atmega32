/*
 * DIO.h
 *
 * Created: 10/15/2017 1:18:06 PM
 *  Author: Amr
 */ 


#ifndef DIO_H_
#define DIO_H_


/************************************************************************/
/*                             configurations                           */
/************************************************************************/

//Initialize ports directions
#define PortAInitDir 0x00  //input 
#define PortBInitDir 0xFF  //output
#define PortCInitDir 0xFF  //output
#define PortDInitDir 0x0F  //input and output

//Initialize ports value
#define PortAInitVal 0x00  //low
#define PortBInitVal 0x00  //low
#define PortCInitVal 0x00  //low
#define PortDInitVal 0xF0  //pull up resistors and low

//prototypes
void DIO_Initialize();
void DIO_SetPortValue(u8_t port, u8_t mask,u8_t value);
void DIO_SetBitValue(u8_t port,Bit_Number number,Bit_State state);
u8_t DIO_GetPinInputValue(u8_t port, Bit_Number number);

#endif /* DIO_H_ */