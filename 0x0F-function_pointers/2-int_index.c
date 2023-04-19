#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an int
 * @array: the array og ints
 * @size: the size of the array
 * @cmp: the pointer
 * Return: 0 or the index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
		for (k = 0; k < size; k++)
			if (cmp(array[k]) != '\0')
				return (k);

	return (-1);
}
