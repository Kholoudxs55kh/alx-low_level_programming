#include <stdio.h>

/**
 *print_ - prints a msg before the main
 */

__attribute__ ((__constructor__)) void print_(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
