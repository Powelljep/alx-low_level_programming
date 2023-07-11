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
	int i = 0, j = 0;
	char *p;
	
	while (*(s + i) != '\0')
	{
		i++;
	}
	for (i; i > -1; i--)
	{
		*(p + j) = *(s + i);
	}
	*(p + j + 1) = '\0';
	for (i = 0; i < (j + 1) ; i++)
	{
		*(s + i) = *(p + i);
	}
}
