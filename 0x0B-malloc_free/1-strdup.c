#include "main.h"
#include <stdlib.h>
/**
 * _sttdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string
 * Return: pointer cstr
 */
char *_strdup(char *str)
{
	int k, h = 0;
	char *cstr = (char *)malloc(sizeof(*str));

	if (str == NULL || cstr == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
	{

		while (h <= k)
		{
			cstr[h] = str[k];
			h++;
		}
	}
	return (cstr);
}
