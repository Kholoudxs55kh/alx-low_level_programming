#include "main.h"
/**
 * _pow - returns the value of x raised to the power of y
 * @x: the value
 * @y: the value bardu
 * Return: the method to power a num
 */

unsigned int _pow(int x, int y)
{
	if (x == 1 || y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to binary num
 * Return: 0 or ui
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0, len;
	unsigned int dec, res = 0;

	if (!b)
		return (0);

	len = strlen(b);

	while (b[x])
	{
		if (b[x] > '1' || b[x] < '0')
			return (0);

		dec = (b[x] - '0') * _pow(2, len - x - 1);

		res += dec;

		x++;
	}

	return (res);
}
