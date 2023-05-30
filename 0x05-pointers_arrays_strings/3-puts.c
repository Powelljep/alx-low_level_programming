#include "main.h"
/**
 * _puts - prints a string
 * @str:prints a string
 *
 * Description: a function that prints a string,
 * followed by a new line, to stdout.
 * Return: void
 */
void _puts(char *str)
{
	int counter = 0;

	while (*(str + counter) != '\0')
	{
		_putchar(*(str + counter));
		counter++;
	}
	_putchar('\n');
}
