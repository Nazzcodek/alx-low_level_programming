#include "lists.h"

/**
 * get_dnodeint_at_index - get node at an index
 *
 * @head: node list
 * @index: index of the node to get
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *index_node = head;

	if (index_node == NULL)
		return (NULL);

	while (index_node != NULL && index > 0)
	{
		index_node = index_node->next;
		index--;
	}
	return (index_node);
}
