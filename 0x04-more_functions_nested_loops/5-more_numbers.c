#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
int Repeat = 1;
int k, digits, ten;

while (Repeat <= 10)
{
for (k = 0; k <= 14; k++)
{
ten = k / 10;
digits = k % 10;

if (k > 9)
_putchar(ten + '0');

_putchar(digits + '0');
}
Repeat++;
_putchar('\n');
}
}
