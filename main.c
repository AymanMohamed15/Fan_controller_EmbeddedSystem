/*
 * main.c
 *
 *  Created on: AYMAN_MOHAMED
 *      Author: Asem technology
 */
#define F_CPU 8000000UL

#include "fan_controller.h"
#include <util/delay.h>

int main()
{
	u16 temp;
	fan_controllerint();
	LCD_String("Fan Controller");	/* Write string on 1st line of LCD*/
	LCD_Command(0xC0);				/* Go to 2nd line*/
	LCD_String("V1.0");				/* Write string on 2nd line*/
	_delay_ms(1000);
	LCD_Clear();
	while (1)
	{
		temp = LM35_U16_ReadTemp();
		check_thetemp(temp);
	}
}
