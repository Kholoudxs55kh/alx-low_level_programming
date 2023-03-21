#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char a;
int Times = 0;
while (Times < 10)
{
for (a = 'a' ; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');

Times++;
}
}
