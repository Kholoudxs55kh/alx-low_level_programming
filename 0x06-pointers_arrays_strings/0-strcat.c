#include "main.h"
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
int k, M = 0;

for (k = 0; *(dest + k) != '\0'; k++)
{
	while (M >= 0 && *(src + M) != '\0')
	{
		*(dest + k) = *(src + M);
		M++;
	}
}
return (dest);
}
