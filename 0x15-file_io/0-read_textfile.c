#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: text file to be read
 * @letters: number of letters being read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t fp;
	ssize_t x;
	ssize_t d;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	d = read(fp, ptr, letters);
	x = write(STDOUT_FILENO, ptr, d);

	free(ptr);
	close(fp);
	return (x);
}
