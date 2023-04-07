#include <stdio.h>
#include <stdlib.h>
/**
 * main - contains the program
 * @argc: considered as the index
 * @argv: considered as the index's value
 * Return: 0
 */
int main(int argc, char *argv[])
{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
