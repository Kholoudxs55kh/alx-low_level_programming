#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
long int Repeat, First = 1, Second = 2, Sum = 0, SumSq = 0;
	for (Repeat = 0 ; Repeat < 49 ; Repeat++)
	{
	if ((Second % 2 == 0) && (Second <= 4000000))
	{
	SumSq = SumSq + Second;
}
	Sum = First + Second;
	    First = Second;
	    Second = Sum;
}
printf("%ld\n", SumSq);
return (0);
}
