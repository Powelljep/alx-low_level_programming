#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return:  returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **ptp, *p, j, i;
	
	ptp = malloc(sizeof(int *) * height);
	
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p = malloc(sizeof(int *) * width);
		if (!p)
		{
			for (j = 0; j < width; j++)
			{
				free((p + j));
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			*(p + j) = 0;
		}
		ptp = &p;
		p++;
		ptp++;
	}

	return (ptp);
}
