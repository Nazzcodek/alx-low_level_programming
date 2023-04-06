#include "main.h"

/**
 * read_textfile - A function that reads content of a file
 *
 * @filename: the file to be read
 * @letters: the text of the file
 *
 * Return: numbers of letter and print
 * (0) if no file, not open, not write
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	ssize_t op, re, wri;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	wri = write(STDOUT_FILENO, buffer, re);

	if (op == -1)
		return (0);

	if (!buffer)
		return (0);
	free(buffer);

	close(op);

	return (wri);
}
