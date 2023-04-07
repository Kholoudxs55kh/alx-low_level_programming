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
	int k;
	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);
	return (0);
}
