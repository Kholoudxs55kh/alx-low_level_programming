#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - contains the func
 * @s1: first str
 * @s2: second str
 * @n: lenght od st2
 * Return: manythings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int h, m = 0, k, ST = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	h = strlen(s1);

	k = strlen(s2);

	if (n >= k)
		ST = h + k;
	else
		ST = h + n;

	str = malloc(sizeof(char) * ST + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (m < ST)
	{
		if (m <= h)
			str[m] = s1[m];

		if (m >= h)
		{
			str[m] = s2[k];
			k++;
		}
		m++;
	}
	str[m] = '\0';
	return (str);
}
