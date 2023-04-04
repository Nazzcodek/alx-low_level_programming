#include "lists.h"

/**
 * insert_nodeint_at_index - A fuction to insert
 * node at an index
 *
 * @head: head pointer
 * @idx: node index
 * @n: integer
 *
 * Return: address of the node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *in_node;

	in_node = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && in_node != NULL; i++)
		{
			in = in_node->next;
		}
	}

	if (in_node == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = in_node->next;
		in_node->next = new_node;
	}

	return (new_node);
}
