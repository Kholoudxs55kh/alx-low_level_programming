#include "main.h"
/**
 * pre_func - checks the 3mlya 7sabya
 * @n: the number
 * @k: elly hn2sm 3leh
 * Return: 1 0r zero
 */
int pre_func(int n, int k)
{
	if (n % k == 0 && n == k)
		return (1);
	else if (n % k == 0)
		return (0);
	else
		return (pre_func(n, k + 1));
}
/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: the number
 * Return: 1 or zero
 */
int is_prime_number(int n)
{
if (n == -1 || n == 1)
return (0);
else
return (pre_func(n, 2));
}
