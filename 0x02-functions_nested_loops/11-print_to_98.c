#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints numbers to 98
 *
 *@n: gets the number
 *
 * Return: 0
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d\n", 98);
}
else
{
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("%d\n", 98);
}
