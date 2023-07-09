#include "hash_tables.h"

/**
 * hash_table_set - function to set hash table
 *
 * @ht: hash table
 * @key: key to hash table
 * @value: value to be to set
 *
 * Return: New value
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = find_node(ht->array[index], key);

	if (node != NULL)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}
	else 
	{
		return (insert_node(ht->array, index, key, value));
	}
}

/**
 * find-node - function to find node to be set
 *
 * @node: node to be set
 * @key: key to the node
 *
 * Return: node or NULL
 */

hash_node_t* find_node(hash_node_t *node, const char *key)
{
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node);

	node = node->next;
	}
	return (NULL);
}
/**
 * insert_node - Function to insert node
 *
 * @index: index of the node
 * @key: keyy to the node
 * @value: value of the node
 *
 * Return: 1 success
 */
int insert_node(hash_node_t **array, unsigned long int index, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));
	
	if (new == NULL)
		return (0);

	new->key = strdup(key);

	if (new->key == NULL) 
	{
		free(new);
		return (0);
	}

	new->value = strdup(value);
   
	if (new->value == NULL)
	{
		free(new->key);
        	free(new);
		return (0);
	}

	new->next = array[index];
	array[index] = new;

	return (1);
}
