/*
 * number1.c
 *
 * Created: 05/12/2021 10:05:13 È.Ù
 * Author: TOP
 */

#include <io.h>
#include <delay.h>
unsigned char i=0;

void main(void)
{
DDRD=0xFF;
while (i<5)
{
PORTD=0xFF;
delay_ms(500);
PORTD=0x00;
delay_ms(500);
i++;
}
while (1);}
