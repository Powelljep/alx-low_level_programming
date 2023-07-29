#include <stddef.h>
#include <stdio.h>
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
	int i = 0, j = 0;
	char *p;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while (i != -1)
	{
		*p = *(s + i);
		printf("%c\n", *(p));
		p++;
		i--;
		if (i == -1)
			*p = '\0';
	};
	printf("%c\n", *p);
	*(s + j) = *p - 1;
	printf("%c\n", *(s + j));
}
