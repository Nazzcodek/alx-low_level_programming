#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 *
 * @array: array to be searched
 * @size: size of the array
 * @value: taget value
 *
 * Return: return index of value or (-1)
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, start = 0, mid;
	size_t end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = start + ((end - start) / 2);

		printf("Searching in array: ");
		for (i = start; i <= end; ++i)
		{
			printf("%d", array[i]);

			if (i < end)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - exponential algorithm
 *
 * @array: array to be searched
 * @size: size of the array
 * @value: taget value
 *
 * Return: return index of value or (-1)
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t right_size;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	right_size = (i < size) ? i : (size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right_size);
	
	return binary_search(array, right_size + 1, value);
}
