#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0 on successful compilation.
 */
int main(void)
{
	char *file = __FILE__;
	int i = 0;

	while(*(file + i) != '\0')
	{
		_putchar(*(file + i);
	}
	_putchar('\n');
	return (0);
}
