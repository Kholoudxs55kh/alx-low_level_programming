#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char Cukur = 'a';
	while (Cukur <= 'z')
	{
	putchar(Cukur);
	Cukur++;
	};
	char Cukur = 'A';
	while (Cukur <= 'Z')
	{
	putchar(Cukur);
	Cukur++;
	}	
	putchar('\n');
	return (0);
}
