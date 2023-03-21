#include "main.h"

/**
 * print_times_table - prints the random numbers table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, h, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (h = 0; h <= n; h++)
			{
				k = h * i;
				if (h == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && h != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
