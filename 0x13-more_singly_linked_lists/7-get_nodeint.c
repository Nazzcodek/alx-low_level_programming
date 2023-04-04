#include "lists.h"

/**
 * get_nodeint_at_index - a function that get index
 * at a node
 *
 * @head: head pointer
 * @index: node index
 *
 * Return: NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
