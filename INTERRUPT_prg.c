/*
 * INTERRUPT_prg.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: HP
 */

#include"STD_TYPES.h"
#include"bit_math.h"
#include "DIO_interface.h"
#include "INTERRUPT_Interface.h"
#include "INTERRUPT_private.h"

void GIE_VidEnable (void){
	//to enable general interrupt
	SET_BIT(SREG,I_BIT);
}

void GIE_VidDisable (void){
	//to disable general interrupt
	CLR_BIT(SREG,I_BIT);
}
