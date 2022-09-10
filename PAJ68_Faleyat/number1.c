/*
 * number1.c
 *
 * Created: 05/12/2021 06:13:09 È.Ù
 * Author: TOP
 */

#include <io.h>
#include <delay.h>
unsigned char i,j=0;
bit flag=1;

void main(void)
{
DDRD=0XFF;
PORTD=0X00;
while (1)
    {
    // Please write your application code here
    PORTD=0X01;
    PORTD=PORTD<<i;
    delay_ms(200);
    if(flag)
    j++;
    else
    {
     j--;
    }    
    if(j==7)flag=0;
    if(j==0)flag=i;

    }
}
