#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * @str: string to print
 *
 * Description: a function that prints every other character
 * of a string, starting with the first character, followed by a new line.
 * Return: void
 */
void puts2(char *str)
{
	int counter = 0;

	while (*(str + counter) != '\0')
	{
		if (counter % 2 == 0)
			_putchar(*(str + counter));
		counter++;
	}
	_putchar('\n');
}
