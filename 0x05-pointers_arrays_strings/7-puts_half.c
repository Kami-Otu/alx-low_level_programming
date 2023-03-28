#include "main.h"

/**
 * puts_half - half of a string
 * @str: function paramete
 * Return: 0
 */

void puts_half(char *str)
{
	int i;

	for (i = 5; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
