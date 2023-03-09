#include "main.h"

/**
 * _puts_recursion - A function that print a string and a new line
 *
 * @s: string input
 *
 * Return: 0 is suceess
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
