#include "main.h"
/**
 * leet - encodes a string into 1337
 *
 * @k: contains the string
 *
 * Return: leeted string
 */
char *leet(char *k)
{
	char sm[] = {'a', 'e', 'o', 't', 'l'};
	char up[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {52, 51, 48, 55, 49};
	int h = 0, m = 0;

	while (k[h] != '\0')
	{
		for (m = 0; m < 5; m++)
		{
			if (k[h] == sm[m] || k[h] == up[m])
			{
				k[h] = num[m];
				break;
			}
		}
		h++;
	}
	return (k);
}
