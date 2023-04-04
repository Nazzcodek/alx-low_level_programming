#include "lists.h"

/**
 * listint_len - fucntion that return number of elemnts in a list
 *
 * @h: list pointer
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != 0)
	{
		len++;
		h = h->next;
	}
	return (len);
}
