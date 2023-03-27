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
	if (s[k] == '\0')
		break;
	k++;
	}
	for (k--; k >= 0; k--)
	{
		_putchar(s[k]);
	}
		_putchar('\n');
}
