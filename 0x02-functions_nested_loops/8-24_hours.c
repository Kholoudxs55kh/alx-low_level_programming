#include "main.h"
/**
 *jack_bauer - prints the time
 *
 *Return: 0
 */
void jack_bauer(void)
{
int H;
int S;

for (H = 0; H <= 23; H++)
{
for (S = 0; S <= 59; S++)
{
_putchar (H / 10 + '0');
_putchar (H % 10 + '0');
_putchar (':');
_putchar (S / 10 + '0');
_putchar (S % 10 + '0');
_putchar ('\n');
}
}
}
