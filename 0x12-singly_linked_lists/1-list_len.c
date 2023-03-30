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
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
