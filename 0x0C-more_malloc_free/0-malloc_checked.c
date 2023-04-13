#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the integer used
 * Return: pointer or 98.
 */
void *malloc_checked(unsigned int b)
{
	char *k = malloc(b);

	if (k == NULL)
		exit(98);

	return (k);
}
