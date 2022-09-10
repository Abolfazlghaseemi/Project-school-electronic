/*
 * number1.c
 *
 * Created: 05/12/2021 04:10:03 È.Ù
 * Author: TOP
 */

#include <io.h>
unsigned char p,a,b,c,d,e,f,g,h;

void main(void)
{
DDRB=0x00;
DDRC=0xFF;
DDRD=0xFF;
while (1)
    {        
    // Please write your application code here  
    p=PINB;
    a=(p&(0b000000001)); 
    b=(p&(0b00000010))>>1;
    c=(p&(0b00000100))>>2;
    d=(p&(0b00001000))>>3;
    e=(p&(0b00010000))>>4;
    f=(p&(0b00100000))>>5;
    g=(p&(0b01000000))>>6;
    h=(p&(0b10000000))>>7;
    PORTD=a+b+c+d+e+f+g+h;      
   PORTC=!a+!b+!c+!d+!e+!f+!g+!h;

    }
}
