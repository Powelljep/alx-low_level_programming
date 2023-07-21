#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator - string to be printed between numbers
 * @n : count of parameters passed.
 * @... : variable number of arguments
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	int num, i, j = 0;

	va_start(params, n);

	for (i = 0; i < (signed int) n; i++)
	{
		num = va_arg(params, int);
		if (separator == NULL)
		{
			printf("%d", num);
		}
		else
		{
			printf("%d", num);
			while (*(separator + j) != '\0')
			{
				if (i == (signed int) (n - 1))
					break;
				printf("%c", *separator);
				j++;
			}
			j = 0;
		}


	}
	printf("\n");
	va_end(params);
}
