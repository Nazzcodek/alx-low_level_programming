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
