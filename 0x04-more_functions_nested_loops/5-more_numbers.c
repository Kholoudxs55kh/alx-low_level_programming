#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
int k = 0;
int Repeat = 0;

while (Repeat <= 10)
{
while (k < 15)
{
_putchar(k + '0');
	k++;
}
_putchar('\n');
}
_putchar('\n');
}

