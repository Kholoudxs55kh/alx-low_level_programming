#include "main.h"
/**
 * print_diagonal -  draws a diagonal line
 *
 * @n: takes the value
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(' ');
		n++;
	}
	_putchar('\\');
	_putchar('\n');
}
