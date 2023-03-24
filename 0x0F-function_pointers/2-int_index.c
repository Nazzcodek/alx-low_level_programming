#include "function_pointer.h"

/**
 * int_index - function that search for an integer
 *
 * @size: numbers of element in the array
 * @cmp: point to compare value
 * @array: pointer to array
 * Return: 0 always success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1)
}
