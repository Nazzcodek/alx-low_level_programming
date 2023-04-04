#include "lists.h"

/**
 * free_listint2 - a function that frees listint_t
 *
 * @head: head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *free_list;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		free_list = *head->next;
		free(*head);
		*head = fre_list;
	}
	head = NULL;
}
