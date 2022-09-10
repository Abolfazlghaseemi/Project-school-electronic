/*
 * number1.c
 *
 * Created: 05/12/2021 11:25:12 È.Ù
 * Author: TOP
 */

#include <io.h>
#include <delay.h>
unsigned char i=0;

void main(void)
{
while (1)
{
DDRB=0xFF;
for(i=0;i<10;i++)
{
PORTB=i;
delay_ms(500);

}
