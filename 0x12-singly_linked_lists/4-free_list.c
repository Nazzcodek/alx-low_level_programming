#include "lists.h"

/**
 * free_list -a function that frees a list
 *
 * @head: head of the linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *present;

	while ((present = head) != NULL)
	{
		present = head->next;
		free(head->str);
		free(head);
		head = present;
	}
}
