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
	int *p, i = 0;
	int elems = max - min + 1;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * elems);

	while (min <= max)
	{
		*(p + i) = min;
		min++;
		i++;
	}
	return (p);
}
