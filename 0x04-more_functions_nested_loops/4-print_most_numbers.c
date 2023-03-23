#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: 0
 */
void print_most_numbers(void)
{
int k = 0;

while (k < 10)
{
if ((k != 2) && (k != 4))
_putchar(k + '0');
k++;
}
_putchar('\n');
}
