#include "lists.h"

/**
* add_dnodeint_end - add node to the end of a list
*
* @head: pointer to a pointer
* @n: constant Integer
*
* Return: New node or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *end;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
			end = current->next;

		end->next = new_node;
		new_node->prev = end;
	}

	return (new_node);
}

