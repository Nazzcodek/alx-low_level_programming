#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - A function that allocate memory using malloc
 *
 * @b: int input
 *
 * Return: A pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
