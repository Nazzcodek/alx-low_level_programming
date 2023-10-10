#include "search_algos.h"

/**
 * jump_search - jump search algorithm
 *
 * @array: array to be search
 * @size: size of the array
 * @value: target value
 *
 * Return: index of the value or (-1)
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump;
	size_t jump_step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
