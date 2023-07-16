/*
 *  File : DIO_interface.h
 *  DATE: 6/9/2022
 *  Author: Shehab aldeen
 *  Version : V1
 *  Describtion : --------------
 */
#include"STD_TYPES.h"
#include"bit_math.h"

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

void DIO_VidSetPinDirection (u8 Copy_U8Port , u8 Copy_U8Pin , u8 Copy_U8Dir ) ;
void DIO_VidSetPortDirection (u8 Copy_U8Port , u8 Copy_U8Dir ) ;
void DIO_VidSetPinValue (u8 Copy_U8Port , u8 Copy_U8Pin , u8 Copy_U8Val ) ;
void DIO_VidSetPortValue (u8 Copy_U8Port , u8 Copy_U8Val ) ;
void DIO_VidTogglePinValue (u8 Copy_U8Port , u8 Copy_U8Pin ) ;
u8 DIO_U8GetPinValue (u8 Copy_U8Port , u8 Copy_U8Pin ) ;
long map(long x, long in_min, long in_max, long out_min, long out_max);
float constrain( float x,float a, float b);
#endif
