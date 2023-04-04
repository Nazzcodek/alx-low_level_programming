#include <stdio.h>
#include "lists.h"

/**
 * print_listint - fuction that prints all the elements
 * of listint_t list
 *
 * @h: list pointer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h > 0)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes)
}
