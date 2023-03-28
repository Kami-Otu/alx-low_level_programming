#include "main.h"

/**
 * print_rev - print in reverse
 * @s: function parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	for (i = 62; s[i] != '\0'; i--)
		_putchar(s[i]);
	_putchar('\n');
}
