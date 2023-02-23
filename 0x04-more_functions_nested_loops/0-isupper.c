#include "main.h"

/**
 * _isupper - A fuction that determine if a char is upper or lower
 * @c: input character
 * Return: 1 is success for upper 0 success for lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
