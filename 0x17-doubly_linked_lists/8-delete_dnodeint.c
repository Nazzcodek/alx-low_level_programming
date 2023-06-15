#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at an index
 *
 * @head: pointer to a pointer
 * @index: index to be deleted
 *
 * Return: delete index
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node = *head;
	unsigned int del_idx = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(del_node);
		return (1);
	}

	while (del_node != NULL && del_idx < index)
	{
		del_node = del_node->next;
		del_idx++;
	}

	if (del_node == NULL)
		return (-1);

	del_node->prev->next = del_node->next;
	if (del_node->next != NULL)
		del_node->next->prev = del_node->prev;

	free(del_node);
	return (1);
}
