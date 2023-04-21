#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @n: the inputs
 * @separator: string to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;

	va_list args;

	va_start(args, n);

	/**
	 * if (separator == NULL)
	*	return;
	*/

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, int));
		if (separator && x < (n - 1)) /* - 1 to end with num*/
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
