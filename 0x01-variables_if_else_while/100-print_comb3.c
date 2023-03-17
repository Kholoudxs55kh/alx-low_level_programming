#include <stdio.h>

/**
 * main - Entery Point
 *
 * Return: 0
 */
int main(void)
{
int k, f;
for (k = 48; k < 58; k++)
{
for (f = k; f < 58; f++)
{
if (k == f)
{
continue;
}
putchar(k);
putchar(f);
if (k == 56 && f == 57)
{break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
