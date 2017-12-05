#ifndef __LED_H
#define __LED_H	 
//#include "sys.h"
#include "stm32f10x_gpio.h"


//#define LED1 PDout(13)// PD13 GPIO_SetBits(GPIOD, 13)
//#define LED3 PDout(14)// PD14 GPIO_SetBits(GPIOD, 14)	

#define LED1ON GPIO_SetBits(GPIOD, GPIO_Pin_13)
#define LED3ON GPIO_SetBits(GPIOD, GPIO_Pin_14)

#define LED1OFF GPIO_ResetBits(GPIOD, GPIO_Pin_13)
#define LED3OFF GPIO_ResetBits(GPIOD, GPIO_Pin_14)

void LED_Init(void);//≥ı ºªØ

		 				    
#endif
