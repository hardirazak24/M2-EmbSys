#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif
#include <avr/io.h>
#include"Switch.h"
#include"Relay.h"

void Relay(void)
{
	DDRB |= (1<<1); 
	PORTB &= ~(1<<1); 
}