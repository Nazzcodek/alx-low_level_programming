#include "main.h"

/**
 * append_text_to_file - A function that add text to a file
 *
 * @filename: File to append text to
 * @text_content: text to append to file
 *
 * Return: (1) success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wri, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wri = write(op, text_content, len);

	if (op == -1 || wri == -1)
		return (-1);

	close(op);

	return (1);
}

