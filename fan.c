/*
 * fan.c
 *
 *  Created on: AYMAN_MOHAMED
 *      Author: Asem technology
 */


#include "fan_controller.h"


u8 duty=0;
void fan_controllerint()
{
		    ADC_VidInit();
			//LCD_VidInitiallization();
		    LCD_Init();
			//DcMotor_VidInit();
			TIMER0_VidInitialize();
			TIMER2_VidInitialize();

			DIO_VidSetPinDirection(BUZZER_PORT,BUZZER_PIN,HIGH);
			DIO_VidSetPinDirection(LED_PORT,GREEN_PIN,HIGH);
			DIO_VidSetPinDirection(LED_PORT,YELLOW_PIN,HIGH);
			DIO_VidSetPinDirection(LED_PORT,RED_PIN,HIGH);

			DIO_VidSetPinValue(BUZZER_PORT,BUZZER_PIN,0);
			DIO_VidSetPinValue(LED_PORT,RED_PIN,0);
			DIO_VidSetPinValue(LED_PORT,YELLOW_PIN,0);
			DIO_VidSetPinValue(LED_PORT,GREEN_PIN,0);

}

u16 LM35_U16_ReadTemp()
{
		//return (u16)OneWireTemp();
		return ADC_VidReadChannel(chanel_0)/10;
}


void check_thetemp(u16 temp)
{
	//check for the temp
	duty = map(temp,17, 25, 75, 100);
	duty = constrain(duty,75,100);
	LCD_Command (0x80);		/* Cursor at home position */
	LCD_String("Temp=");
	LCD_SendNum(temp);
	LCD_String("C   ");
	LCD_Command(0xC0);		/* Go to 2nd line*/

		if (temp >= 25 )
		{
			duty = 100 ;

			DIO_VidSetPinValue(BUZZER_PORT,BUZZER_PIN,1);
			DIO_VidSetPinValue(LED_PORT,RED_PIN,1);
			DIO_VidSetPinValue(LED_PORT,YELLOW_PIN,0);
			DIO_VidSetPinValue(LED_PORT,GREEN_PIN,0);

			Timer2_VidSETDUTY(duty);
		}
		else if (temp >=17 && temp<25)
		{

			DIO_VidSetPinValue(BUZZER_PORT,BUZZER_PIN,0);
			DIO_VidSetPinValue(LED_PORT,RED_PIN,0);
			DIO_VidSetPinValue(LED_PORT,YELLOW_PIN,1);
			DIO_VidSetPinValue(LED_PORT,GREEN_PIN,0);


		}
		else if (temp<17)
		{
			duty=0;

			DIO_VidSetPinValue(BUZZER_PORT,BUZZER_PIN,0);
			DIO_VidSetPinValue(LED_PORT,RED_PIN,0);
			DIO_VidSetPinValue(LED_PORT,YELLOW_PIN,0);
			DIO_VidSetPinValue(LED_PORT,GREEN_PIN,1);


		}
		Timer2_VidSETDUTY(duty);
		LCD_String("Speed=");
		LCD_SendNum(duty);
		LCD_String("%   ");
}
