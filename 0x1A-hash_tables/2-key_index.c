#include "hash_tables.h"

/**
 * key_index - the key index of the hash
 *
 * @key: key to the hash
 * @size: size of the hash
 *
 * Return: key size
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
