#include <stdarg.h>
/**
 * print_all -  a function that prints anything
 * @format: is a list of types of arguments passed to the function.
 * @...: variable parameters passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	printf("\n");
}
