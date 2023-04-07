#include <stdio.h>
#include <stdlib.h>
/**
 * main - contains the programme
 * @argc: considered as the index
 * @argv: considered as the value
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num = 0;

	while (num < argc)
	{
		printf("%s\n", argv[num]);
		num++;
		++*argv;
	}
	return (0);
}
