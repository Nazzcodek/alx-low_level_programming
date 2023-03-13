#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A fuction that return a pointer to a new
 * allocated space in memeory
 *
 * @str: char input
 *
 * Return: 0 Always success
 */

char *_strdup(char *str)
{
	int i, n = 0;
	char *array;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		n++;

	array = malloc(sizeof(char) * (n + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		array[i] = str[i];

	array[n] = '\0';

	return (array);
}
