#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: takes the value
 *
 * Return: 0
 */
void print_square(int size)
{
int k, lines;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= size; k++)
		{
		for (lines = 1; lines <= size ; lines++)
		{
		_putchar('#');
		}
		_putchar('\n');
		}
	}
}
