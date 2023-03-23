#include "main.h"
/**
 * print_numbers - prints number from 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int k = 0;

	while (k < 10)
	{
		_putchar(k + '0');
		k++;
	}
	_putchar('\n');
}
