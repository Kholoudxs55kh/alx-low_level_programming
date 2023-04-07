#include "main.h"

/**
 * int_mo - check if it is a digit
 * @n: int
 * Return: 1 or 0
 */
int int_mo(unsigned int n)
{
return (n >= '0' &&  n <= '9');
}

/**
 * _atoi - convert a str to int
 *@s: contains string
 * Return: num
 */
int _atoi(char *s)
{
unsigned int k, i;
int h;

h = 1;
k = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (int_mo(s[i]))
{
k = (s[i] - 48) + k * 10;

if (s[i + 1] == ' ')
break;
}
else if (s[i] == '-')
{
h *= -1;
}
}
return (k *h);
}
