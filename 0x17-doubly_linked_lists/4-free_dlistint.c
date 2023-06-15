#include "lists.h"

/**
 * free_dlistint - free the head
 *
 * @head: list to be free
 *
 * Return: free list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *end, *next;

	end = head;
	while (end != NULL)
	{
		next = end->next;
		free(end);
		end = next;
	}
}
