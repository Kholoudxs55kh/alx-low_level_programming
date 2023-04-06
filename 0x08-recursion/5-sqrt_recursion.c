#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: the number
 * @k: the natural square of the number
 * Return: k
 */
int pre_sqrt_recursion(int n, int k)
{
	if (k * k == n)

		return (k);

	else if ( k * k >  n)

		return (-1);

	else
		return (0 + pre_sqrt_recursion(n, k + 1));
}

int _sqrt_recursion(int n)
{
		return(pre_sqrt_recursion(n, 1));
}
