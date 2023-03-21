#include "main.h"

/**
 * print_alphabet - Entry Point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char a = 'a';
int Times = 10;
while ( Times <= 10) {
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
Times++;
}
}
