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
	int **p, *p1, i = 0, j = 0;

	p1 = malloc(sizeof(int) * (width));
	p = malloc(sizeof((*p1) * (height)));

	if (!p1 || !p)
		return (NULL);
	while (i < height)
	{
		while (j < width)
		{
			p[height][width] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
