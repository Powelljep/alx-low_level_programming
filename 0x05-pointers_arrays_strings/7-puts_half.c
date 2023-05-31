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
	int len = 0;
	int i;

	while (*(str + len) != '\0')
	{
		len++
	}

	for (i = 0; i < len; i++)
	{
		int n = (len - 1) / 2;

		if ((len - 1) % 2 > 0)
		{
			if (i >=  n)
				_putchar(*(str + len));
		}
		if (i >= n)
			_putchar(*(str + len));

	}
	_putchar('\n');
}
