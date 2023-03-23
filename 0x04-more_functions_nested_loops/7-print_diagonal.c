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
int row, num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= n; k++)
		{
			if (k > 1)
			{
				for (lines = 1; lines <= k - 1; lines++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
