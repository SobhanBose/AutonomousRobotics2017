#include <avr/io.h>
#include <util/delay.h>
void main()
{
DDRB=0b11111111;
while(1)
  {
     PORTB=0b00000010;
	_delay_ms(1000);
	 PORTB=0b00001000;
	_delay_ms(1000);
	 PORTB=0b00001000;
	 _delay_ms(1000);
	 PORTB=0b00000010;
	 _delay_ms(1000);
	
	 
	
	 PORTB=0b00001000;
	 _delay_ms(1000);
	 PORTB=0b00000010;
	 _delay_ms(1000);
	  PORTB=0b0000010;
	 _delay_ms(1000);
	 PORTB=0b00001000;
	 _delay_ms(1000);
	
  }
}
