#include "main.h"

/**
 * print_numbers - function that prints numbers 0 to 9 followed by a new line
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
