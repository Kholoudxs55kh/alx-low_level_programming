#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the inputs
 * Return: 0 or the result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int k;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	k = va_arg(args, int);

	for (x = 1; x < n; x++)
		k = k + va_arg(args, int);

	va_end(args);

	return (k);
}
