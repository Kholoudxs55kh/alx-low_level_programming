#include "main.h"
#include <stdlib.h>
/**
 * create_array - contains the programm
 * @size: the size of array
 * @c: the array
 * Return: pointer (kh).
 */
char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *kh = (char *)malloc(size);

	if (size == 0 || kh == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		kh[k] = c;

	return (kh);
}
