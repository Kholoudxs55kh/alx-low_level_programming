#include "main.h"

/**
 * print_triangle - entry point
 *
 *@size: size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int k, h, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= size; k++)
		{
			for (s = size - k; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= k; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
