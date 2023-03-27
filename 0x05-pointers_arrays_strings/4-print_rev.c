#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s: contains the string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int k = 0;

	while (k >= 0)
	{
	while (k == '\0')
	{
		_putchar(s[k]);
		k--;
	}
	k++;
	_putchar('\n');
	}
}
