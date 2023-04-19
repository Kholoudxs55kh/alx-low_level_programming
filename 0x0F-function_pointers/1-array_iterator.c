#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: the array
 * @size: the size of array
 * @(*action)(int): the pointer to the func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;

	k = 0;

	if (array != NULL && action == NULL)
		for (; k < size; k++)
			action(array[k]);
}
