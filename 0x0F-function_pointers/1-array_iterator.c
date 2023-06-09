#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: the array
 * @size: the size of array
 * @action: the pointer to the func
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;


	if (array != NULL && action != NULL)
		for (k = 0; k < size; k++)
			action(array[k]);
}
