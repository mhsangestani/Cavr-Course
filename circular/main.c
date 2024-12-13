/*
 * main.c
 *
 * Created: 12/31/2022 8:50:24 PM
 * Author: moham
 */

#include <mega32.h>
#include <delay.h>
void main(void)
{
DDRA = 0b11111111;
while (1)
    {
    // Please write your application code here
    PORTA = 1;
    delay_ms(500);
    PORTA = 2;
    delay_ms(500);
    PORTA = 4;
    delay_ms(500);
    PORTA = 8;
    delay_ms(500);
    PORTA = 16;
    delay_ms(500);
    PORTA = 32;
    delay_ms(500);
    PORTA = 64;
    delay_ms(500);
    PORTA = 128;
    delay_ms(500);
    }
}
