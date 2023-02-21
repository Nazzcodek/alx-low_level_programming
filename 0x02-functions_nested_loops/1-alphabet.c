#include <stdio.h>
#include <main.h>

/**
 * main - Printing alphate Entry point
 *
 * Return: 0 is Success
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
