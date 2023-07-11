#include <stddef.h>
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
	int i, j = n - 1;
	int * p;
	
	for (i = 0; i < n; i++)
	{
		*(p + i) = *(a + j);
		j--;
	}
	for (; j < n; j++)
	{
		*(a + j) = *(p + j);
	}
}
