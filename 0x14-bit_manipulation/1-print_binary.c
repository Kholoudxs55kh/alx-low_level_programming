#include "main.h"
/**
 * print_binary - the binary representation of a number.
 *
 *@n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	printf("%lu", n & 1);
}
