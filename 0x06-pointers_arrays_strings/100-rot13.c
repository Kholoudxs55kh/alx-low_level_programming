#include "main.h"
/**
 * rot13 - encodes a string into rot13
 *
 * @k: contains the string
 *
 * Return: roted string
 */
char *rot13(char *k)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int h = 0, m = 0;

	while (k[h] != '\0')
	{
		for (m = 0; m < 70; m++)
		{
			if (k[h] == a[m])
			{
				k[h] = rot13[m];
				break;
			}
		}
		h++;
	}
	return (k);
}
