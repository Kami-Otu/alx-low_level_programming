#include "main.h"

/**
 * _isdigit - check for number 0 to 9
 * @c: parameter to check
 * Return: 1 if c is a digit
 * and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
