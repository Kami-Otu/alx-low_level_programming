#include "main.h"

/**
 * print_alphabet - print alphabets a to z in small letters
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
