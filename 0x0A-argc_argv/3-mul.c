#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, result = 1;

	for (i = 1; i < argc; i++)
	{
		strtol(argv[i], NULL, 10);
		result = result * atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
