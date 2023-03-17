#include <stdio.h>
/**
 * main - prints out all possible combos of 3 digits
 * Return: 0
 */
int main(void)
{
int i, y, k;
for (i = 48; i < 58; i++)
{
for (y = i; y < 58; y++)
{
for (k = y; k < 58; k++)
{
if (i == y || y == k || i == k)
{
continue;
}
putchar(i);
putchar(y);
putchar(k);
if (i == 55 && y == 56 && k == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
