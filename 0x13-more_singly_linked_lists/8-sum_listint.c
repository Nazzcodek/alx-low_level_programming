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

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
