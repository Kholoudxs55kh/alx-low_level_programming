#include "main.h"
#include "string.h"
#include "stdlib.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: the two strings concatenated or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int h, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	str = malloc(strlen(s1) + strlen(s2) + 1);

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
