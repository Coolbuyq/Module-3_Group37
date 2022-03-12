/**
 * @file main.c
 * @author Aniket Nagpure
 * @brief Work of Lock , Unlock , activation/deactivation ,approach light
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "MyStm32f407xx.h"
#include <stdint.h>
#include <stdio.h>
#define BTN_PRESSED ENABLE

void delay(void);
void Lock(void);
void Unlock(void);
void Clockwise(void);
void anti_clockwise(void);
int main(void)
{
	
	GPIO_Handle_t GpioLed, GpioLed1, GpioLed2, GpioLed3, GpioBtn;

	// Initializing GPIO Pin number 12
	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	// Initializing GPIO Pin number 13
	GpioLed1.pGPIOx = GPIOD;
	GpioLed1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed1);

	// Initializing GPIO Pin number 14
	GpioLed2.pGPIOx = GPIOD;
	GpioLed2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed2);

	// Initializing GPIO Pin number 15
	GpioLed3.pGPIOx = GPIOD;
	GpioLed3.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
	GpioLed3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed3);

	// Initializing GPIO Button
	GpioBtn.pGPIOx = GPIOA;
	GpioBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GpioBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GpioBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&GpioBtn);

	uint32_t flag = 0;
	uint32_t Button_pressed = 0;  //Button  Pressed showing how many times Button is pressed start from 0 to 3

	while (1)
	{
		GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_0, DISABLE);
		if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == ENABLE)
		{

			delay();
			flag++;
			if ((flag == 1) && (Button_pressed != 1) && (Button_pressed != 2) && Button_pressed != 3)
			{
				Lock();
				Button_pressed = flag;
				flag = 0;
			}
			else if ((flag == 2) && (Button_pressed != 2) && Button_pressed != 3)
			{
				Unlock();
				Button_pressed = flag;
				flag = 0;
			}
			else if ((flag == 3) && Button_pressed != 3)
			{
				Clockwise();
				Button_pressed = flag;
				flag = 0;
			}
			else if (flag == 4)
			{
				anti_clockwise();
				Button_pressed = flag;
				flag = 0;
			}
		}
	}
}
void delay(void)
{
	for (uint32_t i = 0; i < 50000000; i++)
		;
}

void Lock(void) //Here Car will lock
{
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
}

void Unlock(void) // Here Car will unlock
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
}
void Clockwise(void) //Here Car will start alarm activation/deactivation 
{
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );
}

void anti_clockwise(void)  // Here Car will start Here Car will start approch light
{
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
}