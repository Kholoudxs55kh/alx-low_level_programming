#include <stdio.h>
#include <stdlib.h>
/**
 * main - contains the program
 * @argc: may be the index
 * @argv: consideres as the value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k, output = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	k = atoi(argv[1]);

	while (k > 0)
	{
		if (k >= 25)
			k -= 25;
		else if (k >= 10)
			k -= 10;
		else if (k >= 5)
			k -= 5;
		else if (k >= 2)
			k -= 2;
		else if (k >= 1)
			k -= 1;
	output += 1;
	}
	printf("%d\n", output);
	return (0);
}
