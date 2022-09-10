/*
 * NUMBER1.c
 *
 * Created: 05/12/2021 01:38:37 È.Ù
 * Author: TOP
 */

#include <io.h>
#include <delay.h>
unsigned char i=255;
void main(void)
{
DDRD=0xFF;
while (1)
    {
    // Please write your application code here    
    PORTD=i;
    delay_ms(1000);   
    i--;

    }
}
