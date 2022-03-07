#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif
#include <avr/io.h>
#include"Switch.h"
#include"Relay.h"

void Switch(void)
{
	DDRD &= ~(1<<0);	
	PORTD |= (1<<0); 
	DDRD &= ~(1<<1);	
	PORTD |= (1<<1); 
}
