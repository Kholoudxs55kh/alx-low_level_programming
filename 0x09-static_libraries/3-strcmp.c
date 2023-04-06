#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 *
 * @s1: contains first string
 * @s2: contains second string
 *
 * Return: the value
 */
int _strcmp(char *s1, char *s2)
{
	int k = 0, sum = 0;

	while (s1[k] == s2[k] && s2[k] != '\0')
	{
		k++;
	}
	sum = s1[k] - s2[k];
	return (sum);
}
