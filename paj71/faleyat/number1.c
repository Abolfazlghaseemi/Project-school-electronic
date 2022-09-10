/*
 * number1.c
 *
 * Created: 05/12/2021 10:16:14 È.Ù
 * Author: TOP
 */
#include <io.h>
#include <delay.h>
unsigned char i=0;

void main(void)
{
DDRB=0xFF;
while(i<10){
PORTB=i;
delay_ms(500);
i++;
}
while (1);}
