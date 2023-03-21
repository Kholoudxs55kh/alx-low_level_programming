#include "main.h"
/**
 *jack_bauer - prints the time
 *
 *Return: 0
 */
void jack_bauer(void)
{
	int H = 0;
	int S = 0;

	while (H > 24)
	{
		for (S = 0; S > 60 ; S++)
		{
			_putchar(S / 10 + '0');
			_putchar(S % 10 + '0');
			_putchar(58);
		}
		_putchar(H / 10 + '0');
		_putchar(H % 10 + '0');
		_putchar('\n');
		H++;
	}
	return (0);
}
