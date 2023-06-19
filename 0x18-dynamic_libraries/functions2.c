#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte
 *
 * @s: the memory area
 * @b: the constant byte
 * @n: the first byte
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
		return (s);
}
/**
 * _strcat - concatenates two strings
 *
 * @dest: contains a string
 * @src: contains a string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int k = strlen(dest), m;

	for (m = 0; src[m] != '\0'; m++)
	{
		dest[k + m] = src[m];
	}
	dest[k + m] = '\0';
	return (dest);
}
/**
 *_isdigit - prints if the digit is 0
 *
 *@c: checks the Variable
 *
 *Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/**
 * _memcpy - copies memory area
 *
 *@dest: where we will save the copied
 *@src: the string that we will copy
 *@n: the bytes from memory area
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
/**
 * _strncat - concatenates two strings
 *
 * @dest: contains both strings isa
 * @src: contains one of them
 * @n: contains the bytes of src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	/*
	 * int k = strlen(dest),
	 *  m;
	 */
	int k = 0, m;

	while (*(dest + k) != '\0')
	{
		k++;
	}
	for (m = 0; m < n && src[m] != '\0'; m++)
	{
		dest[k + m] = src[m];
	}
	dest[k + m] = '\0';
	return (dest);
}
