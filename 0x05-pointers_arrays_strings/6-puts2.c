#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: contains the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int k;

	if (k % 2 != 0)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
