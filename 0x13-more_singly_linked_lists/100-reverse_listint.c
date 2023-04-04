#include "lists.h"

/**
 * reverse_listint - a function that
 * reverses a listint_t list
 *
 * @head: head  pointer
 *
 * Return: node pointer to the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *last;

	if (head == NULL || *head == NULL)
		return (NULL);

	last = NULL;

	while ((*head)->next != NULL)
	{
		first = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = first;
	}

	(*head)->next = last;

	return (*head);
}
