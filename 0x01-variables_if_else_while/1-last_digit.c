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
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
printf("Last digit of %i is %i and is ", n, lastDigit);
if (lastDigit > 5)
printf("greater than 5\n", n);
else if (lastDigit == 0)
printf("0\n", n);
else
printf("less than 6 and not 0\n", n);
return (0);
}
