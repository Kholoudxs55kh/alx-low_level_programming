#include "main.h"
/**
 * _memcpy - copies memory area
 *
 *@dest: where we will save the copied
 *@src: the string that we will copy
 *@n: the bytes from memory area
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
