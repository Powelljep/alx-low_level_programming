#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **ptp, i, j;

	if (width <= 0 || height <= 0)
		return NULL;
	
	ptp = malloc(sizeof(int *) * height);
	if (!ptp)
		return NULL;
	
	for (i = 0; i < height; i++)
	{
		ptp[i] = malloc(sizeof(int) * width);
		if (!ptp[i])
		{
			// Free previously allocated memory before returning NULL
			for (j = 0; j < i; j++)
				free(ptp[j]);
			free(ptp);
			return NULL;
		}
		
		for (j = 0; j < width; j++)
		{
			ptp[i][j] = 0;
		}
	}
	
	return ptp;
}
