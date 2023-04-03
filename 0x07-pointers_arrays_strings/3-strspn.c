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
	int k, h;
	/*
	 * s[k]
	 * accept[h]
	 * so i should return <<<< k >>>>>
	 */

	for (k = 0; s[k] != '\0'; k++)
	{
		for (h = 0; accept[h] != '\0'; h++)
		{
		if (s[k] == accept[h])
			return (k);

		if (s[k] != accept[h])
			break;
		}
	}
	return (k);
}
