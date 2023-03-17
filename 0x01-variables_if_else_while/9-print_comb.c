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
putchar(',');
putchar(' ');
k++;
if (k == 9)
break;
}
putchar('\n');
return (0);
}
