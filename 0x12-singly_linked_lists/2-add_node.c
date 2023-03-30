#include <stdlib.h>
#include "list.h"

/**
 * add_node - a function that add nodes
 *
 * @head: nodes to be added
 * @str: node string
 *
 * Return: Address of new elements
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t strings;

	strings = malloc(sizeof(list_t));
	if (strings == NULL)
		return (NULL);

	if (str == NULL || head == NULL)
		return (NULL);

	for (len = 0; str[len] != 0; len++)
		;
	strings->str = malloc(len + 1);
	if (strings->str == NULL)
	{
		free(strings);
		return (NULL);
	}

	strings->str = strdup(str);
	strings->len = len;
	strings->next = *head;
	*head = strings;

	return (strings);


}
