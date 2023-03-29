#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 *
 * @dest: contains the result isa
 * @src: has the string to be copied
 * @n: contains the bytes of src
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = strlen(dest), m;

	for (m = 0; m < n && src[m] != '\0'; m++)
	{
		dest[k] = src[m];
	}
	dest[k] = '\0';
	return (dest);
}
