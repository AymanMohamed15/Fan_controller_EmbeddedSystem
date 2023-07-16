/*
 * fan_controller.h
 *
 *  Created on: AYMAN_MOHAMED
 *      Author: Asem technology
 */


#ifndef FAN_CONTROLLER_H_
#define FAN_CONTROLLER_H_

#include"STD_TYPES.h"
#include"bit_math.h"
#include "DIO_interface.h"
#include "ADC_interface.h"
//#include "LCD_Interface.h"
#include "LCD2 .h"
#include "INTERRUPT_Interface.h"
#include "TIMER_Interface.h"
#include <util/delay.h>


#define chanel_0	0
#define CLK_WISE 	1
#define STOP		0
#define BUZZER_PORT 2
#define BUZZER_PIN 	1
#define LED_PORT	3
#define GREEN_PIN	4
#define YELLOW_PIN	5
#define RED_PIN		6

#define LOW 		0
#define HIGH		1




//void Emergency_state (void);
//void normal_state ();
void fan_controllerint();
u16  LM35_U16_ReadTemp();
void check_thetemp(u16 temp);




#endif /* FAN_CONTROLLER_H_ */
