#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: contains the string
 * @c: the first occurrence of the character
 *
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
		return (s);

	return ('\0');
}
