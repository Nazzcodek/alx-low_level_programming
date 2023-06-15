#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at an index
 *
 * @h: node to be inserted
 * @idx: index of the new node
 * @n: index to be shifted
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *shift_node;
	unsigned int i = 0;

	if (h == NULL || (idx > 0 && *h == NULL))
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	shift_node = *h;
	for (i = 1; i < idx; i++)
	{
		if (shift_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		shift_node = shift_node->next;
	}

	new_node->next = shift_node->next;
	new_node->prev = shift_node;
	if (shift_node->next != NULL)
		shift_node->next->prev = new_node;

	shift_node->next = new_node;
	return (new_node);
}

