#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string
 * Return: pointer cstr
 */
char *_strdup(char *str)
{
	int k = 0, h = 0;
	char *cstr;

	if (str == NULL)
		return (NULL);

	cstr = (char *)malloc(strlen(str) + 1);

	if (cstr == NULL)
		return (NULL);

	for (; str[k] != '\0'; k++)
	{
		while (h <= k)
		{
			cstr[h] = str[k];
			h++;
		}
	}
	return (cstr);
}
