#include "main.h"

/**
 * flip_bits - A fuction that flips bit
 *
 * @n: number of bit
 * @m: index of bit to flip
 *
 * Return: number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int no_bits;

	for (no_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			no_bits++;
	}

	return (no_bits);
}
