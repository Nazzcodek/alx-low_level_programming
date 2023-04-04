#include "lists.h"

/**
 * free_listint2 - a function that frees listint_t
 *
 * @head: head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *free_list, *save;

	if (head == NULL)
		return;

	save = *head;

	while (save)
	{
		free_list = save->next;
		free(save);
		save = free_list;
	}
	head = NULL;
}
