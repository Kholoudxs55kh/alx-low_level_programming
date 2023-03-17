#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
char Cumali = 'a';
while (Cumali <= 'z')
{
if (Cumali != 'q' && Cumali != 'e')
{
putchar(Cumali);
}
Cumali++;
}
putchar('\n');
return (0);
}
