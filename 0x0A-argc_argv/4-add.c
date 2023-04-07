#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - contains the programme
 * @argc: considered as the index of the command line
 * @argv: has the value of those indexes
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int nateg = 0, k;

	for (k = 1; k < argc; k++)
	{
		if (!isdigit(*argv[k]) && *argv[k] != '-')
	{
		printf("Error\n");
			return (1);
	}
		if (atoi(argv[k] > 0)
	nateg = nateg + atoi(argv[k]);
	}
	printf("%d\n", nateg);

	return (0);
}
