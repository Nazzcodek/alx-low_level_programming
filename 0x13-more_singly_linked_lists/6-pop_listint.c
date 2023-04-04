#include "lists.h"

/**
 * pop_listint - function that delete the head node
 *
 * @head: head pointer
 *
 * Return: (0) list empty
 */

int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *pop;

	if (head == NULL)
		return (0);

	pop = *head;
	head_node = pop->n;
	*head = pop->next;

	free(pop);

	return (head_node);
}
