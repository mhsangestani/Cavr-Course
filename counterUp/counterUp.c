/*
 * counterUp.c
 *
 * Created: 1/1/2023 10:49:54 AM
 * Author: moham
 */

#include <mega32.h>
#include <delay.h>
unsigned char i = 0;
void main(void)
{
DDRA = 0xFF;
s1:
PORTA=i;
delay_ms(500);
i++;
goto s1;
}
