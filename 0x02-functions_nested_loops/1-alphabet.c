#include "main.h"

/**
 * print_alphabet - Entry Point
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char a = 'a';
	char b = 'z';
	while (a <= b)
{
		_putchar(a);
		a++;
}
	_putchar('\n');
	return(0);
}
