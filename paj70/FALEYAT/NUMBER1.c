/*
 * NUMBER1.c
 *
 * Created: 05/12/2021 08:50:22 È.Ù
 * Author: TOP
 */

#include <io.h>

#include <delay.h>
unsigned char i=0
unsigned char j=255;
void main(void)
{
DDRD=0xaFF;
DDRB.0=0;
PORTB.0=1;
while (1)
    {
    if(PINB.0==1)
    {  
    j=255;
    PORTD=i;
    delay_ms(500);
    i++;
    }  
    else
    {  
    i=0;
    PORTD=j;
    delay_ms(500);
    j--;
    }
    }
}
