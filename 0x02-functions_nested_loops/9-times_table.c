#include "main.h"
/**
 *times_table - Entry Point
 *
 *Return: 0
 */
void times_table(void)
{
	int a, b, sum;
	while (a <= 9)
	{
		_putchar(48);
		while (b <= 9)
		{
			sum = a * b;
			_putchar(44);
			_putchar(32);
			if ( sum <= 9)
			{
			_putchar(32);
			_putchar(sum + '0');
			}
			a++;
		}
		b++;
	}
}
