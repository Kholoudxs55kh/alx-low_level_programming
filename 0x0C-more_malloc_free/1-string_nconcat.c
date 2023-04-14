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
	char *str;
	unsigned int k, ss, s;

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

	ss = strlen(s1);
	str = malloc(ss + s + 1);

	if (str == NULL)
		return (NULL);

	for (k = 0; k < (s + ss + 1); k++)
		str[k] = s1[k];

	for (k = 0; k < n; k++)
		str[ss + k] = s2[k];

	str[k + ss] = '\0';

	return (str);
}
