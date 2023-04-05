#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: contains the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		_putchar(*(s + k));
	}
	_putchar('\n');
}
