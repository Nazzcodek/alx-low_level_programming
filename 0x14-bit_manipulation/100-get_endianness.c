#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: (0) or (1)
 */
int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);

	return (0);
}
