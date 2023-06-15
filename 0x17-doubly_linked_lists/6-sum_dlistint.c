#include "lists.h"

/**
 * sum_dlistint - sum the node in a list
 *
 * @head: pointer to list
 *
 * Return: sum of the node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sum_nodes = head;
	int sum = 0;

	while (sum_nodes != NULL)
	{
		sum += sum_nodes->n;
		sum_nodes = sum_nodes->next;
	}
	return (sum);
}
