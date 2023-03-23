#include "main.h"
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n, ten, digits;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if (n % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else
		{
			ten = n / 10;
			digits = n % 10;
			if (n > 9)
			_putchar(ten + '0');

			_putchar(digits + '0');
			_putchar(' ');
}
		}
	}
