#include "lists.h"

/**
 * free_listint - fuction that frees listint_t
 *
 * @head: pointer head
 */

void free_listint(listint_t *head)
{
	listint_t *fr;

	while ((fr = head) != NULL)
	{
		fr = head->next;
		free(fr);
	}
}
