#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: array of n member
 * @size: byte of member
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrmem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrmem = malloc(nmemb * size);

	if (arrmem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arrmem[i] = 0;

	return (arrmem);
}
