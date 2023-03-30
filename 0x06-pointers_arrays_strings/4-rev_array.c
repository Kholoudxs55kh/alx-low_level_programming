#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: the array
 * @n: the number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int k = 0, h = 0;

	n = n - 1;
	while (k <= n)
	{
		h = a[k];
		a[k++] = a[n];
		a[n--] = h;
	}
}
