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
	int j = 0, i = 0;
	int *p = NULL;

	while (n > -1)
	{
		n--
		*(p + i) = *(a + n);
		i++;
	}
	while (j < i)
	{
		*(a + j) = *(p + i);
		j++;
		i--;
	}
}
