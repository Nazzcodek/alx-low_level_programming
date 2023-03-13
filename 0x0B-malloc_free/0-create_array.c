#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - A function that create an array with initialize char
 *
 * @size: size input
 * @c: initialize character
 *
 * Return: 0 Always success
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; size > i; i++)
		array[i] = c;
	return (array);
}
