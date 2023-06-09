#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line
 * @a: array with elements to print
 * @n: number of elements of the array to be printed
 *
 * Description: a function that prints n elements of an array of integers,
 * followed by a new line.
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
