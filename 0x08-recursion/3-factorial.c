#include "main.h"

/**
 * factorial - factorial of n numbers
 * @n: number of factorials
 *
 * Return: -1 if numbeer is negative
 * and 1 if number is positive
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
