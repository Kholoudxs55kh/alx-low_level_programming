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
		count = 1;
		for (h = 0; accept[h] != '\0'; h++)
		{
		if (s[k] == accept[h])
		{
			count = 0;
			break;
			/*
			 * return (k);
			 *
*
		*if (s[k] != accept[h])
			*break;
		*}
		*/
	}
	if (count == 1) 
		break;
	}
	}
	return (k);
}
