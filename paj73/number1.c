/*
 * number1.c
 *
 * Created: 06/12/2021 12:00:29 �.�
 * Author: TOP
 */

#include <io.h>
unsigned char a,b,c,d;
void main(void)
{
DDRA=0x00;
DDRB=0x00;
DDRC=0xFF;
DDRD=0XFF;
while (1)
    {
    // Please write your application code here  
    a=PINA & 0x07; 
    b=PINB & 0x07;
    c=a+b;
    d=a-b;
    PORTC=c;
    PORTD=d;
    

    }
}
