/*
 * Button_driver_ECU.c
 *
 * Created: 07/04/2020 05:22:56 م
 *  Author: Ahmed SemSem
 */ 
#include "../Header/Button_driver_ECU.h"

void BUTTON_vInit(u8 port, u8 pin){
	GPIO_vsetPIN_DIR(port, pin, INPUT);
}

u8 BUTTON_u8read(u8 port, u8 pin){
	u8 Value;
	Value = GPIO_u8read_PIN(port, pin);
	for(volatile u8 mSec=0; mSec<5; mSec++);// delay 5ms for debouncing
	Value = GPIO_u8read_PIN(port, pin);
	return Value;
}