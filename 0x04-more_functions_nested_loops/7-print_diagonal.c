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
	int m, k;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			if ( m > 1)
			{
		for (k = 1; k <= m - 1; k++)
		{
		_putchar(' ');
		}
		
		_putchar('\\');
		_putchar('\n');
	}
	}
}
}
