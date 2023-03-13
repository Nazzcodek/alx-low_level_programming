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
	int **iarray;
	int n, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	iarray = malloc(sizeof(char) * height);

	if (iarray == NULL)
	{
		free(iarray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		iarray[i] = malloc(sizeof(char) * width);
		if (iarray == NULL)
		{
			free(iarray);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			iarray[i][n] = 0;
		}
	}
	return (iarray);
}
