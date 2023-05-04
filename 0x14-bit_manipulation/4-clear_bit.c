#include "main.h"

/**
 * clear_bit - A function that clears bit
 *
 * @n: number of bit
 * @index: index of bit
 *
 * Return: (1) success, otherwise (-1)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
