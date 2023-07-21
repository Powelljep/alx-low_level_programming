#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: count of arguments passed
 * @...: variable arguments passed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	int i;
	char *str;

	va_start(params, n);

	for (i = 0; i < (int)n; i++)
	{
		str = va_arg(params, char *);

		if (str != NULL)
		{
			printf("%s", str);
			if (i < (int)n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(params);
	printf("\n");
}
