#include <stddef.h>
#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string to reverse
 *
 * Description: a function that reverses a string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char *p;

	while (*(s + len) != '\0')
	{
		len++;
	}
	while (len > 0)
	{
		*p = *(s + (len - 1));
		p++;
		if (len == 1)
			*(p + 1)  = '\0';
		len--;
	}
	while (
}
