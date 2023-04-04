#include "lists.h"

/**
 * add_nodeint_end - a function that add new node
 * at the end of a list
 *
 * @head: node head
 * @n: new node integer
 *
 * Return:  the address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *last_n;

	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
		*head = new_n;
	else
	{
		last_n = *head;

		while (last_n->next != NULL)
			last_n = last_n->next;

		last_n->next = new
	}
	return (new_n);
}
