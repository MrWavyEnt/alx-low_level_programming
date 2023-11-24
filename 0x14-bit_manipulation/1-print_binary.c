#include "main.h"

/**
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
	int t, d = 0;
	unsigned long int led;

	for (t = 63; t >= 0; t--)
	{
		led = n >> t;
		if (led & 1)
		{
			_putchar('1');
			d++;
		}
		else if (led)
			_putchar('0');
	}
	if (!led)
		_putchar('0');
}
