#include "main.h"

/**
 * set_bit - A function that set bit
 *
 * @n: number of bit
 * @index: index of bit
 *
 * Return: index of bit otherwise (-1)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
