/*
 * number1.c
 *
 * Created: 05/12/2021 02:33:43 ?.?
 * Author: TOP
 */

#include <io.h>
unsigned char p,a;
void main(void)
{
DDRD=0x00;
DDRD=0xFF;
while (1)
    {
    // Please write your application code here
    p=PINB;
    a=p%2;
    if(a==0)
    {   
    PORTD=2;
    }
    else
    {
     PORTD=1;
    }

    }
}
