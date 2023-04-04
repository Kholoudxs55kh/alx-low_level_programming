#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix of integers
 * @a: contains the ay7aga
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int k, nateg = 0;

	for(k = 0; k < size; k++)
	{
		nateg += a[k];
		a+= size;
	}

	printf("%d, ", nateg);

	a -= size;

	for (k = 0; k < size; k++)
	{
		nateg += a[k];
		a -= size;
	}
	printf("%d\n", nateg);
}
