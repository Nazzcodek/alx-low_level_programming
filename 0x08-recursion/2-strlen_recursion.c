#include "main.h"

/**
 * _strlen_recursion - A function that re=turn the lenght of a string
 *
 * @s: input string
 *
 * Return: 0 is success
 */

void _strlen_recursion(char *s)
{
	if (*s == '\0')
		_putchar(0);
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}


}

