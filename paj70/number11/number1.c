/*
 * number1.c
 *
 * Created: 05/12/2021 08:25:39 �.�
 * Author: TOP
 */
#include <io.h>

void main(void)
{
DDRD=0xFF;
DDRB.0=0;
PORTB.0=1;
while (1)
    {
    // Please write your application code here      
    if(PINB.0==1){ 
    PORTD=0xFF;
    }  
    else{  
      PORTD=0x00;
    }

    }
}

