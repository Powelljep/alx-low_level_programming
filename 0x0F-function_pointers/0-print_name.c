#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name : name of the person
 * @f() : pointer funct
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);

}
