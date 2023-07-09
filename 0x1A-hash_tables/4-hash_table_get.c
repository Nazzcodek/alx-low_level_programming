#include "hash_tables.h"

/**
 * hash_table_get - function to get the hash table
 *
 * @ht: the hash table
 * @key: key to the hash table
 *
 * Return: NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[idx];

	if (!ht || !key || !strlen(key) || !ht->array || !ht->size)
		return (NULL);

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
