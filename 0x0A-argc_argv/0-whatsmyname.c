#include <stdio.h>
#include "main.h"

/**
 * main - arguments to the main function
 * @argc: command line
 * @argv: command variable
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
