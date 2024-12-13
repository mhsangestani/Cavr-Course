/*
 * main.c
 *
 * Created: 1/1/2023 11:06:44 AM
 * Author: moham
 */

#include <mega32.h>
#include <delay.h>
unsigned char i=0;
void main(void)
{
DDRA = 0b00001111;
while (1)
    {
    PORTA=i;
    delay_ms(500);
    i++;
    if(i == 10) i = 0;
    }
}
