#include "main.h"

/**
 * create_file - A function that create file
 *
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: (-1) if failed, filename
 */

int create_file(const char *filename, char *text_content)
{
	int op, wri, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	wri = write(op, text_content, len);

	if (op == -1 || wri  == -1)
		return (-1);

	close(op);

	return (1);
}

