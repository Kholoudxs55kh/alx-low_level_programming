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
if(k ==9)
break;
putchar(',');
putchar(' ');
k++;
}
putchar('\n');
return (0);
}
