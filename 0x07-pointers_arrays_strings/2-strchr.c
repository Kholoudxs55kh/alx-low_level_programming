#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: contains the string
 * @c: the first occurrence of the character
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
			++s;
	}
	return ('\0');
}
