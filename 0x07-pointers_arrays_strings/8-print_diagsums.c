#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: contains the ay7aga
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int k, total;

	k = 0;
	total = 0;
	while (k < size)
	{
		total = total + *(a + k);
		a = a + size;
		k++;
	}
	printf("%d, ", total);

	total = 0;
	k = 0;
	a = a - size;
	while (k < size)
	{
		total = total + *(a + k);
		a = a - size;
		k++;
	}
	printf("%d\n", nateg);
}
