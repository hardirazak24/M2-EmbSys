#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif
#include <avr/io.h>
#include"Switch.h"
#include"Relay.h"
#define F_CPU 16000000

uint8_t top_level_switch;
uint8_t bottom_level_switch;

int main(void)
{
	Switch();
    Relay();
    while(1)
	{			
		top_level_switch= PIND & (1<<0);
		if(top_level_switch == 0)
		{
			PORTB &= ~(1<<PORTB1);	
		}
		bottom_level_switch = PIND & (1<<1);
		if(bottom_level_switch == (1<<1))
		{
			PORTB |= (1<<PORTB1);
		}
	}
}
