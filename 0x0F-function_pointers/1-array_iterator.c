#include "function_pointers.h"

/**
 * array_iterator - a function that iterate through an array
 *
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to action
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
