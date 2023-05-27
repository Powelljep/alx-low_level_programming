#include "main.h"
/**
 * print_square -  prints a square, followed by a new line
 * @size: size is the size of the square
 *
 * Description: a function that prints a square, followed by a new line
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; i++)
		{
			_putchar(35);
		}
	}
}
