#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number
 * @index: the index of the bit
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	x = n >> index;

	if (index > 64)
		return (-1);

	return (x & 1);
}
