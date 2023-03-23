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
		int num_lines;

	if (n <= 0)
	{
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
				for (num_lines = 1; num_lines <= row - 1; num_lines++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
}
