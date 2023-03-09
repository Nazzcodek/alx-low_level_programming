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
	int l = 0

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}

