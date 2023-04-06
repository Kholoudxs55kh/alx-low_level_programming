#include "main.h"
/**
 * _isupper - prints if the character is
 * upper case or not.
 *@c: the containing var
 *
 * Return: 0 if lowercase ,1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
