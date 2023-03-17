#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int C = 0;
while (C < 10)
{
putchar(C +'0');
C++;
}
C = 'a';
while (C <= 'f')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
