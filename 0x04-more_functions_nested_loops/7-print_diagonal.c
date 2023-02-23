#include "main.h"

/**
 * print_diagonal - a function that prints diagonal
 *
 * @n: is the diagonal
 * Return: none is success
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (i - n))
			_putchar('\n');
	}
	_putchar('\n');
}
