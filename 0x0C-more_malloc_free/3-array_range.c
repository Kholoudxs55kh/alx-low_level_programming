#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: the min num
 * @max: the greatest num
 * Return: NULL or pointer
 */
int *array_range(int min, int max)
{
	int *arr, k = 0;

	if (min > max)
		return (NULL);

	arr = (int *) malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (k = 0; min <= max; k++, min++)
		arr[k] = min;

	return (arr);
}
