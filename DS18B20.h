#ifndef DS18B20_H
#define DS18B20_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "DIO_INTERFACE.h"


// This configuration is required to make a PIC be in open drain
/*
#define BUSDIR LATAbits.LA5 // Set direction: input or output
#define BUSOUT TRISAbits.RA5 // Set output: high or low 
#define BUSIN PORTAbits.RA5 // Read input 
*/

#define BUSDIR		DIO_VidSetPinDirection (0, 0, 1)
#define BUSOUT(x)	DIO_VidSetPinValue (0, 0, x)
#define BUSIN 		DIO_U8GetPinValue(0, 0)


// Available Functions:
float OneWireTemp(void); // Returns the temperature in celsius 
unsigned int OneWireReset(void); // Sends a reset pulse to the sensor 
void OneWireWriteBit(unsigned char); // write a single bit to the OneWire
unsigned char OneWireReadBit(void); // reads a single bit 
void OneWireWriteByte(unsigned char); // writes a byte 
unsigned char OneWireReadByte(void); // reads a byte 
unsigned char OneWireRead(void); // reads the current status of the bus
void OneWireHigh(void); // sets the bus high
void OneWireRelease(void); // releases the bus 

#endif // DS18B20_H
