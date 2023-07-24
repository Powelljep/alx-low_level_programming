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

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * max - min + 1);

	while (min <= (max - min + 1))
	{
		*(p + i) = min;
		min++;
		i++;
	}
	return (p);
}
