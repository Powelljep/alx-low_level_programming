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
	int elems = (abs(max) - abs(min)) + 1;

	if (min > max)
		return (int *)(NULL);
	p = malloc(sizeof(int) * elems);
	if (p == NULL)
		return (int *)(NULL);

	while (min <= elems)
	{
		*(p + i) = min;
		min++;
		i++;
	}
	return (p);
}
