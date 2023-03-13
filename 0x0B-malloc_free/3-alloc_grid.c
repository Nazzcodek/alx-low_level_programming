#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - A function that return a pointer
 * to a 2 dimmessional array
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: 0 alaways success
 */

int **alloc_grid(int width, int height)
{
	int **arrayD;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrayD = malloc(sizeof(int *) * height);

	if (arrayD == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arrayD[i] = malloc(sizeof(int) * width);

		if (arrayD[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arrayD[i]);

			free(arrayD);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
			arrayD[i][n] = 0;
	}

	return (arrayD);
}
