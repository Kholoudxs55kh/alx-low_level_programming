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
	unsigned int k, j = 0, h, ST = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = strlen(s1);
	h = strlen(s2);

	if (n >= h)
		ST = k + h;
	else
		ST = k + n;

	str = malloc(sizeof(char) * ST + 1);
	if (str == NULL)
		return (NULL);

	h = 0;
	while (j < ST)
	{
		if (j <= k)
			str[j] = s1[j];

		if (j >= k)
		{
			str[j] = s2[h];
			h++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
