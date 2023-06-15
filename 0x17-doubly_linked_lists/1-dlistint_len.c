#include "lists.h"

/**
 * dlistint_len - count length of a double linked list
 *
 * @h: list to count
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_no = 0;

	while (h != NULL)
	{
		node_no++;
		h = h->next;
	}
	return (node_no);
}
