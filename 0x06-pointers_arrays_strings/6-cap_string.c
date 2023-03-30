#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @k: contains the string
 *
 * Return: the string capitalized
 */
char *cap_string(char *k)
{
	int h = 0, s = 0;
	char sep[] = {' ', ',', ';', '.', '!', '?',
'"', '(', ')', '(', '{', '}', '\n', '\t'};

	while (k[h] != '\0')
	{
	if (k[h] >= 97 && k[h] <= 122)
	{
		k[h] = k[h] - 32;
	}
	for (s = 0; sep[s] >= 0; s++)
	{
		if (k[h + 1] >= 97 && k[h + 1] <= 122)
		{
			k[h + 1] = k[h + 1] - 32;
		}
	}
	h++;
	}
	return (k);
}

