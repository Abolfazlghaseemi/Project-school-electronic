/*
 * number1.c
 *
 * Created: 05/12/2021 10:53:26 È.Ù
 * Author: TOP
 */

#include <io.h>
#include <delay.h>
unsigned char i=0;

void main(void)
{
DDRB=0xff;
for(i=0;i<5;i++){
PORTB=0xff;
delay_ms(500);
PORTB=0x00;
delay_ms(500);
}
while (1);}
