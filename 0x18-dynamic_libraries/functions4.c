#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: contains the string
 *
 * Return: 0
 */
void _puts(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
/**
 * _strcmp - compares two strings
 *
 * @s1: contains first string
 * @s2: contains second string
 *
 * Return: the value
 */
int _strcmp(char *s1, char *s2)
{
	int k = 0, sum = 0;

	while (s1[k] == s2[k] && s2[k] != '\0')
	{
		k++;
	}
	sum = s1[k] - s2[k];
	return (sum);
}
/**
 * _strspn - gets the legnth of a prefix substring
 *
 * @s: has the string
 * @accept: would be the model
 *
 * Return: s or the number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, h, count;
	/*
	 * s[k]
	 * accept[h]
	 * so i should return <<<< k >>>>>
	 */

	for (k = 0; s[k] != '\0'; k++)
	{
		h = 0;
		while (accept[h] != '\0')
		{
			if (s[k] == accept[h])
			{
				count++;
				break;
			}
			h++;
		}
		if (s[k] != accept[h])
			break;

	}
	return (k);
}
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: contains a string
 * @accept: contains a string
 *
 * Return: s or the bytes that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int k, h;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (h = 0; accept[h] != '\0'; h++)
		{
			if (s[k] == accept[h])
				return (s + k);
		}
	}
	return ('\0');
}
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
/**
 * _strcpy - copies the string
 *
 * @src: pointer that contains the string
 * @dest: pointer that will has the copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int k = 0;

while (src[k] != '\0')
{
dest[k] = src[k];
k++;
}
dest[k] = '\0';

return (dest);
}


