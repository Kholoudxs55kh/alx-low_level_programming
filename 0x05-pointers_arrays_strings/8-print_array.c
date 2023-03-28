#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers
 *
 * @a: contains elements -pointers-
 * @n: same as a but not Pointers
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int n = 0;

	while (a[n] != '\0')
	{
		printf("%d, ", a[n]);
		n++;
				}
				printf("\n");
}
