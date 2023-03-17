#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDigit = n*5;
if (lastDigit > 25)
printf("Last digit of %d is greater than 5\n", n);
else if (lastDigit == 0)
printf("Last digit of %d is 0\n", n);
else
printf("Last digit of %d is less than 6 and not 0\n", n);
return (0);
}
