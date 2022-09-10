/*
 * number1.c
 *
 * Created: 06/12/2021 12:26:40 Þ.Ù
 * Author: TOP
 */

#include <io.h>
void init_port(void);
void input(void);
unsigned char a,b,c,d;
unsigned char sum(unsigned char x,unsigned char y);
unsigned char sub(unsigned char x,unsigned char y);
void output(unsigned char x,unsigned char y);

void main(void)
{
init_port();
while(1)
{
input();
c=sum(a,b);
d=sub(a,b);
output(c,d);
}
}
void init_port(void){
DDRA=0x00;
DDRB=0x00;
DDRC=0xFF;
DDRD=0XFF;
}
void input(void){
    a=PINA & 0x07; 
    b=PINB & 0x07;
    }
    unsigned char sum(unsigned char x,unsigned char y)
    {   
     unsigned char z;
     z=x+y;
     return z;
    }
    unsigned char sub(unsigned char x,unsigned char y)
    {   
         unsigned char z;
         z=x-y; 
          return z;
    
    }
    void output(unsigned char x,unsigned char y){ 
    PORTC=x;
    PORTD=y;
    }