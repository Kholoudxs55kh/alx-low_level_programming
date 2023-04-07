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
	int nateg = 0, k, dig;

	for (k = 1; k < argc; k++)
	{
		for (dig = 0; argv[k][dig] != '\0'; dig++)
		{
		if (!isdigit(argv[k][dig]))
	{
		printf("Error\n");
			return (1);
	}
		}
	nateg += atoi(argv[k]);
	}
	printf("%d\n", nateg);

	return (0);
}
