#include <stdio.h>

/**
 * main - Entery Point
 *
 * Return: 0
 */
int main(void)
{
int k, h;
k = 48;
h = 48;
while (k < 58)
{
h = 48;
while (h < 58)
{
if (k != h && h < k)
{
putchar(k);
putchar(h);
if (k == 57 && h == 56)
break;
putchar(',');
putchar(' ');
}
k++;
}
h++;
}
putchar('\n');
return (0);
}
