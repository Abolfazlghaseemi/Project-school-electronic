/*
 * number2.c
 *
 * Created: 05/12/2021 05:48:50 È.Ù
 * Author: TOP
 */

#include <io.h>

#include <delay.h>
unsigned char i=0;

void main(void)
{
DDRD=0xff;
while (1)
    {
    // Please write your application code here    
    for(i=0;i<8;i++)
    {
    PORTD=1<<i;
    delay_ms(500);
    }

    }
}
