#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
unsigned long int Repeat, First = 1, Second = 2, Sum = 0;
for (Repeat = 0 ; Repeat < 90 ; Repeat++)
{
printf("%lu, ", First);
Sum = First + Second;
First = Second;
Second = Sum;
if (Repeat == 89)
printf("%lu\n", First);
}
return (0);
}
