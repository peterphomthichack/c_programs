#include "stm32f407xx.h"


static void rcc_en(void) 
{
	RCC->AHB1ENR |= (1U<<3);   //Enable the clock for GPIOD
	RCC->AHB1ENR |= (1U<<0);	 //Enable the clock for GPIOA
}

static void gpio_en(void)
{
	GPIOD->MODER |= (1U<<30);  //Set GPIOD PIN 15 as output
	GPIOD->MODER |= (1U<<28);  //Set GPIOD PIN 14 as output
	GPIOD->MODER |= (1U<<26);  //Set GPIOD PIN 13 as output
	GPIOD->MODER |= (1U<<24);  //Set GPIOD PIN 12 as output
	
	GPIOA->MODER &=~(0U<<0);	 //Set GPIOA PIN 0 as output
	GPIOA->MODER &=~(0U<<1);	 //Set GPIOA PIN 0 as output
}

int main(void)
{
	
	rcc_en();
	gpio_en();

	while(1)
	{
		if(GPIOA->IDR & (1U<<0))
		{

			//GPIOD->ODR |= (1U<<14);
			GPIOD->ODR |= (1U<<31);
			GPIOD->ODR |= (1U<<15);
			
			GPIOD->ODR |= (1U<<30);
			GPIOD->ODR |= (1U<<14);
			
			GPIOD->ODR |= (1U<<29);
			GPIOD->ODR |= (1U<<13);
			
			GPIOD->ODR |= (1U<<28);
			GPIOD->ODR |= (1U<<12);
		}
		else
		{

			//GPIOD->ODR &=~ (1U<<14);
			
			GPIOD->ODR &=~ (1U<<31);
			GPIOD->ODR &=~ (1U<<15);
			
			GPIOD->ODR &=~ (1U<<30);
			GPIOD->ODR &=~ (1U<<14);
			
			GPIOD->ODR &=~ (1U<<29);
			GPIOD->ODR &=~ (1U<<13);
			
			GPIOD->ODR &=~ (1U<<28);
			GPIOD->ODR &=~ (1U<<12);
			
			
		}
		

		
	}

	
}

