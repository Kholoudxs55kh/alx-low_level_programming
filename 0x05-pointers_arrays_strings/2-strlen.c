#include "main.h"
/**
 * _strlen -  returns the length of a string
 *
 * @s: contains the string
 *
 * Return: the value we need
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
