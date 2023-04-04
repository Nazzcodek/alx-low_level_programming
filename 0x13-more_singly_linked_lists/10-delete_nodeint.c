#include "lists.h"

/**
 * delete_nodeint_at_index - a function that delete node
 * at index
 *
 * @head: head pointer
 * @index: integer
 *
 * Return: (1) success (-1) failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *in_node;
	unsigned int del_node;

	in_node = *head;

	if (in_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(in_node);
		return (1);
	}

	for (del_node = 0; del_node < (index - 1); del_node++)
	{
		if (in_node->next == NULL)
			return (-1);

		in_node = in_node->next;
	}

	node = in_node->next;
	in_node->next = node->next;
	free(node);
	return (1);
}
