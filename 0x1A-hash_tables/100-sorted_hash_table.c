#include "hash_tables.h"

/**
 * shash_table_create - create sorted hash table
 *
 * @size: size of the hash table
 *
 * Return: sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht = malloc(sizeof(shash_table_t));

	if (sht == NULL)
		return (NULL);

	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;

	sht->array = calloc(size, sizeof(shash_node_t *));

	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}

	return (sht);
}

/**
 * make_shash_node - make sorted hash node
 *
 * @key: sorted hash key
 * @value: sorted hash value
 *
 * Return: sorted hash node
 */

shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *shn = malloc(sizeof(shash_node_t));

	if (shn == NULL)
		return (NULL);

	shn->key = strdup(key);

	if (shn->key == NULL)
	{
		free(shn);
		return (NULL);
	}

	shn->value = strdup(value);

	if (shn->value == NULL)
	{
		free(shn->key);
		free(shn);
		return (NULL);
	}

	shn->next = NULL;
	shn->snext = NULL;
	shn->sprev = NULL;

	return (shn);
}

/**
 * add_to_sorted_list - Add sorted list to hash
 *
 * @table: hash table
 * @node: hash node
 *
 * Return: new node
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *sht_curr;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = node;
		table->stail = node;
		return;
	}

	sht_curr = table->shead;

	while (sht_curr != NULL)
	{
		if (strcmp(node->key, sht_curr->key) < 0)
		{
			node->snext = sht_curr;
			node->sprev = sht_curr->sprev;

			if (sht_curr->sprev != NULL)
				sht_curr->sprev->snext = node;
			else
				table->shead = node;

			sht_curr->sprev = node;

			return;
		}

		sht_curr = sht_curr->snext;
	}

	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}
/**
 * shash_table_set - set sorted hash node
 *
 * @ht: hash table
 * @key: hash key
 * @value: hash value
 *
 * Return: (1) success
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *sht_curr, *shn;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	sht_curr = ht->array[index];

	while (sht_curr != NULL)
	{
		if (strcmp(sht_curr->key, key) == 0)
		{
			new_value = strdup(value);

			if (new_value == NULL)
				return (0);

			free(sht_curr->value);
			sht_curr->value = new_value;

			return (1);
		}

		sht_curr = sht_curr->next;
	}

	shn = make_shash_node(key, value);

	if (shn == NULL)
		return (0);

	shn->next = ht->array[index];
	ht->array[index] = shn;
	add_to_sorted_list(ht, shn);

	return (1);
}
/**
 * shash_table_get - get sorted hash table
 *
 * @ht: hash table
 * @key: hash key
 *
 * Return: NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *sht_curr;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	sht_curr = ht->array[index];

	while (sht_curr != NULL)
	{
		if (strcmp(sht_curr->key, key) == 0)
			return (sht_curr->value);

		sht_curr = sht_curr->next;
	}

	return (NULL);
}
/**
 * shash_table_print - print sorted hash table
 *
 * @ht: hash table
 **/
void shash_table_print(const shash_table_t *ht)
{
	int first_printed = 0;
	shash_node_t *sht_curr;

	if (ht == NULL || ht->array == NULL)
		return;

	putchar('{');
	sht_curr = ht->shead;

	while (sht_curr != NULL)
	{
		if (first_printed == 1)
			printf(", ");

		printf("'%s': '%s'", sht_curr->key, sht_curr->value);

		first_printed = 1;
		sht_curr = sht_curr->snext;
	}

	printf("}\n");
}
/**
 * shash_table_print_rev - print hash table in reverse order
 *
 * @ht: hash table
 **/

void shash_table_print_rev(const shash_table_t *ht)
{
	int first_printed = 0;
	shash_node_t *sht_curr;

	if (ht == NULL || ht->array == NULL)
		return;

	putchar('{');
	sht_curr = ht->stail;

	while (sht_curr != NULL)
	{
		if (first_printed == 1)
			printf(", ");

		printf("'%s': '%s'", sht_curr->key, sht_curr->value);

		first_printed = 1;
		sht_curr = sht_curr->sprev;
	}

	printf("}\n");
}
/**
 * shash_table_delete - delete soreted hash table
 *
 * @ht: hash table
 *
 * Return: NULL
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *next;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; ++i)
	{

		current = ht->array[i];

		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	free(ht->array);
	ht->array = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->size = 0;

	free(ht);
}
