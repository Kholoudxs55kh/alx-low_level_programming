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
	int k = 0, m;

	if (*(dest + k) != '\0')
		k++;
	for (m = 0; *(src + m) != '\0'; m++)
	{
		while (*(dest + k) == *(src + m))
		{
			if (*(dest + k) == '\0)
				break;
		k++;
		m++;
}
return (dest);
}
