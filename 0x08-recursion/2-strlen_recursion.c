#include "main.h"

/**
 * _strlen_recursion - function that returns length of a string
 * @s: Parameter to be counted
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	/*int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
	*/
	if (*s == '\0')
		return (0);
	else
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
