#include <stdio.h>
#include "lists.h"

/**
 * list_len - a function that return elements num in a list
 *
 * @h: number of elements in list
 *
 * Return: num list
 */

size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	while (h)
	{
		num_elements++;
		h->next;
	}
	return (num_elements);

}
