#include "lists.h"

/**
 * add_nodeint - a function that add new node
 *
 * @head: head of the node
 * @n: integer of new node
 *
 * Return: number of node or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	
	*head = new_node;

	return (new_node);
}
