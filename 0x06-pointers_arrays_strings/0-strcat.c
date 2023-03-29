#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 *
 * @dest: contains a string
 * @src: contains a string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int k = strlen(dest), m;

	for (m = 0; src[m] != '\0'; m++)
	{
		dest[k + m] = src[m];
	}
	dest[k + m] = '\0';
	return (dest);
}
