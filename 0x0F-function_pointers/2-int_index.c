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

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}
	return (-1);
}
