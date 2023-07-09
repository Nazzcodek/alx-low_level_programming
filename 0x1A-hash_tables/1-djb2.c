#include "hash_tables.h"

/**
 * hash_djb2 - djb2 imlementation algorithm
 *
 * @str: string character
 *
 * Return: hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while (*str != '\0')
	{
		c = *str;
		hash = ((hash << 5) + hash) + c;
		str++;
	}

	return (hash);
}
