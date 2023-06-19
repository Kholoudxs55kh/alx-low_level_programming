#include "main.h"

/**
 * int_mo - check if it is a digit
 * @n: int
 * Return: 1 or 0
 */
int int_mo(unsigned int n)
{
return (n >= '0' &&  n <= '9');
}

/**
 * _atoi - convert a str to int
 *@s: contains string
 * Return: num
 */
int _atoi(char *s)
{
unsigned int k, i;
int h;

h = 1;
k = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (int_mo(s[i]))
{
k = (s[i] - 48) + k * 10;

if (s[i + 1] == ' ')
break;
}
else if (s[i] == '-')
{
h *= -1;
}
}
return (k *h);
}
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
/**
 * _strlen -  returns the length of a string
 *
 * @s: contains the string
 *
 * Return: the value we need
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strncpy - copies a string
 *
 * @dest: contains the result isa
 * @src: has the string to be copied
 * @n: contains the bytes of src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	while (m < n)
	{
	dest[m] = '\0';
	m++;
	}
	return (dest);
}

