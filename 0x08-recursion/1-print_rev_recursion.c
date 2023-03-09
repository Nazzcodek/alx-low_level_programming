#include "main.h"

/**
 * _print_rev_recursion - A function that print a stringin reverse
 *
 * @s: input string
 *
 * Return: 0 is success
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
