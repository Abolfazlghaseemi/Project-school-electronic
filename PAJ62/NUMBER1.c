/*
 * NUMBER1.c
 *
 * Created: 05/12/2021 01:20:45 È.Ù
 * Author: TOP
 */

#include <io.h>
#include <delay.h>
unsigned char i=0;


void main(void)
{
DDRB=0xFF;
while (1)
    {
    // Please write your application code here 
      PORTB=i; 
      delay_ms(2000);
      i++;

    }
}
