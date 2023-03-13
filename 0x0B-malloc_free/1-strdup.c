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
	int i, end;
	char *array;

	if (str == NULL)
		return (NULL);
	for (end = 0; end <= *str; end++)
	{
	}

	end += 1;
	array = malloc(sizeof(char) * end);

	for (i = 0; end > i; i++)
		array[i] = str[i];

	if (array == NULL)
		return (NULL);
	return (array);

}
