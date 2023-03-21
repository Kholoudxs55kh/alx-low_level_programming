#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *
 *@m: contains the number
 *
 *Return: the number of last digit
 */
int print_last_digit(int m)
{
	int k = m % 10;

	if (m > 0)
	{
	_putchar(k + '0');
	return (m % 10);
}
	else
{
	_putchar(-k + 48);
	return (-m % 10);
}
}
