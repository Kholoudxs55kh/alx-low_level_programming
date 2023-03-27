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
	int k = 0;

	while (k % 2 == 0)
	{
		if (str[k] == '\0')
		{
			_putchar('\n');
		}
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
