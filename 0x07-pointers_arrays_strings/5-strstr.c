#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: contains a string
 * @needle: contains a string
 *
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char* st;

while (*haystack != '\0')
{
	st = haystack;
while (*haystack != '\0' && *needle != '\0' && *needle == *haystack)
{
haystack++;
needle++;
}
if (*needle == '\0')
{
return (haystack);
}
haystack = st + 1;
}
return (0);
}
