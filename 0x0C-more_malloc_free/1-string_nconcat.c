#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: numbers :DD
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char* str;
	unsigned int k, h, s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	s2 = "";

	/*
	*str = malloc(strlen(s1) + strlen(s2) + 1);
	*/
	s = strlen(s2);

	if (n >= s)
		n = s;

	 str = malloc(strlen(s1) + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
		str[k] = s1[k];

	for (h = 0; s2[h] != '\0'; k++, h++)
		str[k] = s2[h];

	return (str);
}
