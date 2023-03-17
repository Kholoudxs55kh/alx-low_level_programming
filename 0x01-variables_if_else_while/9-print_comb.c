#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int k = 0;
while (k < 9)
{
putchar(k + '0');
putchar(',');
putchar(' ');
if (k == 9)
break;
k++;
}
putchar('\n');
return (0);
}
