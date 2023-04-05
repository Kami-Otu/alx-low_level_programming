#include "main.h"

/**
 * _pow_recursion - functions to print number that raise y to x
 * @x: first parameter
 * @y: second parameter
 *
 * Return: -1 and 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
