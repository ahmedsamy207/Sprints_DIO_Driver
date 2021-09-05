/*
 * Application.c
 *
 * Created: 03/09/2021 11:19:26 م
 *  Author: Ahmed SemSem
 */ 
#include "../MCAL/Header/Data_type.h"
#include "../HAL/Header/LED_driver_ECU.h"
#include "../HAL/Header/Button_driver_ECU.h"


int main(void)
{
	LED_vinitialize('A',0);
	BUTTON_vInit('D',3);
	while(1)
    {
		if (BUTTON_u8read('D',3) == HIGH)
		{
			while (BUTTON_u8read('D',3) == HIGH);
			LED_vToggle('A',0);
		}
	}
}