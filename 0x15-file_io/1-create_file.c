#include "main.h"

/**
 * create_file - Create a file.
 * @filename: A pointer to the name of the file to the create.
 * @text_content: A pointer to a string to write to file.
 * * Return: If the function should fails -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fp, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fp, text_content, len);

	if (fp == -1 || x == -1)
		return (-1);

	close(fp);

	return (1);
}
