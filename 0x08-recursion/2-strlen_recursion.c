#include "main.h"
/**
 * _strlen_recursion - returns the legnth of a string
 * @s: string
 * Return: the legnth of a string
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
