#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: pointer to new location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_loc;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_loc = malloc(new_size);
	if (new_loc == NULL)
		return (NULL);

	for (i = 0; i < new_size && i < old_size; i++)
		new_loc[i] = ptr[i];
	free(ptr);

	return (new_loc);


}
