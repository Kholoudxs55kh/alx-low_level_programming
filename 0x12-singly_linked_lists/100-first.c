#include <stdio.h>

void print_(void) __attribute__ ((constructor));
/**
 *print_ - prints a msg before the main
 */

void print_(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
