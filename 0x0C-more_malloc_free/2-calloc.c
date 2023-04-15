#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements to be allocated
 * @size: the size of elements
 * Return: Null or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str; /* using void to be filled with any DT*/

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	return (str);
}
