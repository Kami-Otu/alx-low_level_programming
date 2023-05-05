#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int x, length = 0;
	unsigned long int present;

	for (x = 63; x >= 0; x--)
	{
		present = n >> x;

		if (present & 1)
		{
			_putchar('1');
			length++;
		}
		else if (length)
			_putchar('0');
	}
	if (!length)
		_putchar('0');
}
