#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: the variable arguments, a list of n strings
 *
 * If separator is NULL, don't print it.
 * If one of the string is NULL, print "(nil)" instead.
 * Print a new line at the end of the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		printf("%s", str ? str : "(nil)");

		if (i != n - 1 && separator)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
