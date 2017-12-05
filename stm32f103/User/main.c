#include "stm32f10x.h"
#include "led.h"

void delay_ms(long t)
{
    long i = 1000000;
    while(t-- > 0)
    {
      while(i-- > 0)
      {
        
      }
    }
}

int main()
{
  LED_Init();
  while(1)
  {
     		LED1ON;
                LED3ON;
		
		delay_ms(300);	 //—” ±300ms
     		LED1OFF;
                LED3OFF;
		delay_ms(300);	//—” ±300ms 
  }
  //return 0;
}