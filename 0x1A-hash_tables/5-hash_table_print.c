#include "hash_tables.h"

/**
 * hash_table_print - function to print hash table
 *
 * @ht: hash table to print
 **/

void hash_table_print(const hash_table_t *ht)
{
	int firstEntry = 1;
	unsigned int idx;
	hash_node_t *tmp;

	if (!ht)
		return;

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];

		while (tmp != NULL)
		{
			if (firstEntry)
				printf("'%s': '%s'", tmp->key, tmp->value);
			else
				printf(", '%s': '%s'", tmp->key, tmp->value);

			firstEntry = 0;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
