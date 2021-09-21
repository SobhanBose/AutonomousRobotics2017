#include <avr/io.h>
#include <util/delay.h>

void main()
{
   DDRB=0b11111111;
   DDRC=0b0000000;
   int rs=0;
   int ls=0;
   while(1)
   {
      rs=PINC&0b0001000;
	  ls=PINC&0b0000001;
	  if((ls==0b0000001) && (rs==0b0001000))
	  {
	     PORTB=0b00010010;
	  }

	  if((ls==0b0000000) && (rs==0b0000000))
	  {
	     PORTB=0b00000000;
		 _delay_ms(20000);
		 PORTB=0b00001100;
		 _delay_ms(20000);
		 _delay_ms(20000);
		 _delay_ms(20000);
		 PORTB=0b00010000;
		 _delay_ms(20000);
		 _delay_ms(20000);
		 PORTB=0b00010010;
	  }
	}
}
