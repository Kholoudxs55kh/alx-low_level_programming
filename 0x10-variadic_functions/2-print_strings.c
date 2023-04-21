#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between
 * @n: inputs
 * Return: void or (nil)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(args, char *);

	if (str)
		printf("%s", str);

	if (str == NULL)
		printf("(nil)");


	if (x < n - 1 && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

