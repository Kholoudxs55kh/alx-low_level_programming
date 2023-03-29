#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 *
 * @dest: contains both strings isa
 * @src: contains one of them
 * @n: contains the bytes of src
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int k = strlen(dest), m;

	for (m = 0; n && src[m] != '\0'; m++)
	{
		dest[k + m] = src[m];
	}
	dest[k + m] = '\0';
	return (dest);
}
