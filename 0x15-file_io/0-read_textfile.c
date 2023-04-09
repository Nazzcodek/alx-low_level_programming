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

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t re, wri;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fp = fopen(filename, "r");
	re = fread(buffer, sizeof(char), letters, fp);
	wri = fwrite(buffer, sizeof(char), re, stdout);

	if (fp == NULL)
	{
		free(buffer);
		return (0);

	}

	if (!buffer)
		return (0);
	free(buffer);

	fclose(fp);

	return (wri);
}
