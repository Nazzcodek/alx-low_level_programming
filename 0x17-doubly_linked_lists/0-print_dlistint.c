#include "lists.h"

/**
 * print_dlistint - print a double linked list
 *
 * @h: list to print
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_no = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_no++;
	}
	return (node_no);
}
