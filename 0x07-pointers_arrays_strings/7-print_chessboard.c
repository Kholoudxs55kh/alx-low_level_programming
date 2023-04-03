#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * 
 * @a: contains bla bla
 *
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int k, h;

	for (k = 0; k < 8; k++)
	{
		for (h = 0; h < 8; h++)
			_putchar (a[k][h]);

	_putchar('\0');
	}
}
