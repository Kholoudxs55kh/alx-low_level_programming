#include "main.h"
/**
 *times_table - Entry Point
 *
 *Return: 0
 */
void times_table(void)
{
int a;
int b;
int sum;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
sum = a * b;
if ((sum / 10) == 0)
{
if (b == 0)
{
_putchar ('0');
}
if (b != 0)
{
_putchar (' ');
_putchar ((sum % 10) + '0');
}
if (b < 9)
{
_putchar(',');
_putchar (' ');
}
}
else
{
_putchar ((sum / 10) + '0');
_putchar ((sum % 10) + '0');
if (b < 9)
{
_putchar(',');
_putchar (' ');
}
}
}
_putchar ('\n');
}
}
