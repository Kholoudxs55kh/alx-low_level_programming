#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int k = 0;
while (k < 10)
{
putchar(k + '0');
k++;
if (k != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
