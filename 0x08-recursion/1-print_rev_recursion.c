#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: string to print in reverse
 *
 * Return: returns nothing.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return;
	}
	i++;
	_print_rev_recursion((s + i));
	_putchar(*s);
}
