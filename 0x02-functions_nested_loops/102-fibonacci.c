#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	long int Repeat, First = 1, Second = 2, Sum = 0;
for (Repeat = 0 ; Repeat < 49 ; Repeat++)
{
printf("%ld, ", First);
Sum = First + Second;
First = Second;
Second = Sum;
if (Repeat == 48)
printf("%ld\n", Second);
}
return (0);
}
