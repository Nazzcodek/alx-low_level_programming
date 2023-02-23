#include "main.h"

/**
 * _isdigit - check if its a digit or not
 *
 * @c: insert character
 * Return: 0 is success
 */

int _isdigit(int c)
{
	if (c >= 47 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
