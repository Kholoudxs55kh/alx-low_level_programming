#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number
 * @m: number
 * Return: .
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int Xxr, count = 0;

	Xxr = n ^ m;

	while (Xxr)
	{
		count += (Xxr & 1);

		Xxr = Xxr >> 1;

	}

	return (count);
}
