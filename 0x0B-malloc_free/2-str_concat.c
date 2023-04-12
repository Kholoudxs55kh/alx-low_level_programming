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
	int k = 0, h;
	char *s3 = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	if (s3 == NULL)
		return (NULL);

	for (; s1[k] != '\0'; k++)

		s3[k] = s1[k];

	for (h = 0; s2[h] != '\0'; h++)
	s3[k + h] = s2[h];


	s3[k + h] = '\0';
	return(s3);
}
