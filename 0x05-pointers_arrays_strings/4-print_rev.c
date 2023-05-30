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
	int counter = _strlen(s);

	while (*(s+counter) >= 0)
	{
		_putchar(*(s + counter));
		counter--;
	}
	_putchar('\n');
}
