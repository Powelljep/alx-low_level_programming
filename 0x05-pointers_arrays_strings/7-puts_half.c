#include "main.h"
/**
 * puts_half - prints half of a string,
 * @str: string to print
 *
 * Description: a function that prints half of a
 * string, followed by a new line.
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 > 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
