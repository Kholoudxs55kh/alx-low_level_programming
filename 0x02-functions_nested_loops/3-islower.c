#include "main.h"
#include <ctype.h>
/**
 *_islower - checks for lowercase character
 *
 *@c: The character to check
 *
 *Return: 1 for lower case,0 for others
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
