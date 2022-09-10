/*
 * number1.c
 *
 * Created: 06/12/2021 02:59:55 Þ.Ù
 * Author: TOP
 */

#include <mega8.h>
#include <delay.h>
unsigned char i=0;

void main(void)
{
DDRC=0xFF;
DDRD=0xFF;
while (1)
    {
    for(i=7;i>=0;i--)
    {
    PORTD=PORTD^(1<<i);
    delay_ms(100);
    }
    for(i=6;i>=0;i--)
    {
    PORTC=PORTC^(1<<i);
    delay_ms(100);
    }
    for(i=0;i<7;i++)
    {
    PORTC=PORTC^(1<<i);
    delay_ms(100);
    }
    for(i=0;i<8;i++)
    {
    PORTD=PORTD^(1<<i);
    delay_ms(100);
    }
} 
}

