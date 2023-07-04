#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Description: a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Returns: void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		_putchar((char)i);
	_putchar('\n');
}
