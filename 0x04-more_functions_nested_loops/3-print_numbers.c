#include "main.h"

/**
 * print_numbers - a function that prints number
 *
 * Return: none is success
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
