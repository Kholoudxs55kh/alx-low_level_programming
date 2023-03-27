#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: contains the string
 *
 * Return: 0
 */
void _puts(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
