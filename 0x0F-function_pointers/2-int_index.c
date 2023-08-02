#include "function_pointers.h"
/**
 * int int_index - a function that searches for an integer.
 * @array: array to search from
 * @size: size of the array
 * @cmp: pointer funtion to do the search
 *
 * Return: returns int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (!cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
