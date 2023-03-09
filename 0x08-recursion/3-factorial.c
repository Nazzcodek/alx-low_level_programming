#include "main.h"

/**
 * factorial - A function that returns factoria of a
 * a given number
 *
 * @n: input number
 *
 * Return: 0 is success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
