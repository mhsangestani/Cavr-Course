/*
 * main.c
 *
 * Created: 1/9/2023 12:03:00 AM
 * Author: moham
 */

#include <mega32.h>
#include <delay.h>
int i;
void main(void)
{
DDRC = 0xff;
while (1)
    {
    // Please write your application code here
    for(i=0;i<=20;i++){
        PORTC=i;
        delay_ms(500);
        }
    }
}
