#include "hash_tables.h"

/**
 * hash_table_delete - function to delete hash table
 *
 * @ht: hash table to be deleted
 **/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned int idx;

	if (!ht || !ht->array)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];

		while (current != NULL)
		{
			next = current->next;

			free(current->value);
			free(current->key);
			free(current);

			current = next;
		}
	}

	free(ht->array);
	free(ht);
}
