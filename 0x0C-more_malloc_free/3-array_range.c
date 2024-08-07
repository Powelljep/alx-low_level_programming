#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: first value to inlude in the array
 * @max: last maximum value to include in the array
 *
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *p, i = 0, elems;

	if (min > max)
		return (NULL);
	elems = max - min + 1;
	p = (int *) malloc(sizeof(int) * elems);
	if (p == NULL)
		return (NULL);

	while (i < elems)
	{
		*(p + i) = min;
		i++;
		min++;
	}
	return (p);
}
