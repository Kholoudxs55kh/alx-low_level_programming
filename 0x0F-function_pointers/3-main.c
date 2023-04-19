#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -contains the program
 * @argc: index
 * @argv: value
 *
 * Return: 0, the result or Error
 */
int main(int argc, char *argv[])
{
	int k, h;
	int (*nateg)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	nateg = get_op_func(argv[2]);

	if (nateg == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	k = atoi(argv[1]);
	h = atoi(argv[3]);

	printf("%d\n", nateg(k, h));

	return (0);
}
