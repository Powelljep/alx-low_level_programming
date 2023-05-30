#include "main.h"
/**
 * print_rev - that prints a string, in reverse
 * @s: string to print
 *
 * Description: a function that prints a string,
 * in reverse, followed by a new line.
 * Return:  void
 */
void print_rev(char *s)
{
	int len = 0, counter;

	while (*(s + len) != '\0')
	{
		len++;
	}

	counter = len - 1;

	while (*(s + counter) >= 0)
	{
		_putchar(*(s + counter));
		counter--;
	}
	_putchar('\n');
}
