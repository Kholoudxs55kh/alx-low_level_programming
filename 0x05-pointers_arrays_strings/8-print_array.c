#include "main.h"
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
	while (a[n] != '\0')
	{
		printf("%d, " a[n]);
		n++;
				}
				printf("\n");
}
