#include "lists.h"

/**
 * free_listint2 - fuction that frees listint_t
 *
 * @head: pointer head
 */

void free_listint2(listint_t **head)
{
	listint_t *fr;

	while (head)
	{
		fr = *head->next;
		free(*head);
		*head = fr
	}
}
