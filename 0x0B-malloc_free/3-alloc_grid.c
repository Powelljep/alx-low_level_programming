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
	int **ptp, *p, i = 0, j = 0;

	ptp = malloc(sizeof(int *) * height);
	if (!ptp)
		return (NULL);
	while (i < height)
	{
		p = malloc(sizeof(int *) * width);
		if (!p)
		{
			while(j < height * width)
			{
				free((p + j));
				j++;
			}
			return (NULL);
		}
		while (j < width)
		{
			*(p + j) = 0;
			j++;
		}
		ptp = &p;
		p++;
		ptp++;
	}
	return (ptp);
}
