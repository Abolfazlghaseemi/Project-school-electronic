/*
 * number1.c
 *
 * Created: 05/12/2021 07:08:24 È.Ù
 * Author: TOP
 */

#include <io.h>
#include <delay.h>
unsigned char i=0;


void main(void)
{
DDRB=0xff;
while (1)
    {
    // Please write your application code here 
    PORTB=i;
    delay_ms(500);
    i++;
    if(i==10)i=0; 
    

    }
}
