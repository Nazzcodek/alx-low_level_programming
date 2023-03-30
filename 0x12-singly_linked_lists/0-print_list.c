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

	while (h)
	{
		if (h->str == NULL)
			_putchar("[0] (nill)\n");
		else
			_putchar("[%d] %s\n", h->len, h->str);
		node++;
		h = h->next
	}
	return (node);
}
