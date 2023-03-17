#include <stdio.h>
#include <stdlib.h>
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
putchar(C);
C++;
}
char M = 'a';
while (M <= 'f')
{
putchar(M);
M++;
}
putchar('\n');
return (0);
}
