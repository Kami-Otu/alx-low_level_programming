#include "main.h"

/**
 * _isupper - check for upper case alphabet
 * @c: parameter to check
 * Return: 1 for upper
 * and 0 for lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
