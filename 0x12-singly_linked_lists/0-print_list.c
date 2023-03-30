#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints list_t list
 *
 * @h: the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node++;
	}
	return (node);
}
