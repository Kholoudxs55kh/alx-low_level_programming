#include "main.h"
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
	return (count);
}
