#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int n = 1;
	char *LoR;

	LoR = (char *)&n;

	if (LoR[0] == 1)
		return (1);

	return (0);
}
