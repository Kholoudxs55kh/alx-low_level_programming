#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: contains a string
 * @needle: contains a string
 *
 * Return: pointer to the beginning of the located substring, or NULL
 */
char  *_strstr(char *haystack, char *needle)
{
	char *first, *second;

	while (*haystack != '\0')
	{
		first = haystack;
		second = needle;

		while (*haystack != '\0' && *second != '\0' && *haystack == *second)
		{
			haystack++;
			second++;
		}
		if (*second == '\0')
			return (first);
		haystack = first + 1;
	}
	return (0);
}
