#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: array of intergers
 * @n:the number of elements of the array
 *
 * Description: a function that reverses the content of an array of integers.
 * Return: return reversed array of a
 */
void reverse_array(int *a, int n)
{
	int elem_tracker = n; i = 0;

	while (i < n + 1)
	{
		*(a + i) = *(a + elem_tracker);
		elem_tracker--;
		i++;
	}
	return (a);
}
