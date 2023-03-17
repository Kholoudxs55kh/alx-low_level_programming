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
	}
	char Yamac = 'A';
	while (Yamac <= 'Z')
	{
	putchar(Yamac);
	Yamac++;
	}	
	putchar('\n');
	return (0);
}
