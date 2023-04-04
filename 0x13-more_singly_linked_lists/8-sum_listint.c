#include "lists.h"

/**
 * sum_listint - A function that sum a list
 *
 * @head: head pointer
 *
 * Return: (0) list empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
