#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
double Repeat, First = 1, Second = 2, Sum = 0;
for (Repeat = 0 ; Repeat < 97 ; Repeat++)
{
printf("%.lf, ", First);
Sum = First + Second;
First = Second;
Second = Sum;
if (Repeat == 96)
printf("%.lf\n", First);
}
return (0);
}
