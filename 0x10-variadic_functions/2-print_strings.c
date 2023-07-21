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
	int i, j = 0, k = 0;
	char *str;

	va_start(params, n);

	for (i = 0; i < (signed int) n; i++)
	{
		*str = va_arg(params, int);
		while (*(str + j) != '\0')
		{
			printf("%c", *(str + j));
			j++;
			if (separator != NULL)
			{
				while (*(separator + k) != '\0')
				{
					if(*(str + j) == '\0')
						break;
					printf("%c", *(separator + k));
				}
			}
		}
		j = 0;
	}
	printf("\n");
}
