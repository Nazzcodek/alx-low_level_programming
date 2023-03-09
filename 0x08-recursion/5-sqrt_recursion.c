#include "main.h"
int squareroot(int n, int i);

/**
 * _sqrt_recursion - A functuion that return square root
 *
 * @n: input
 *
 * Return: 0 is success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, 0));
}

/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int squareroot(int n, int i)
{
	if (i * i  > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i + 1));
}
