#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that adds positive numbers
 * @argc: command line
 * @argv: command variable
 *
 * Return: 0 (success) and 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%d\n", i);
			return (0);
		}
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int j = 0;

			while (argv[i][j] != '\0')
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
