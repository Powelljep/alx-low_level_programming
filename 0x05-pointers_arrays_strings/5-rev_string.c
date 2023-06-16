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
	int n = 0, i = 0, j = 0, k = 0;
	char sval;

	while (*(s + i) != '\0')
	{
		n++;
	}

	while (*(s + i) != '\0' )
	{
		*(s + n) = *(s + i);
		i++;
		n--;
	}

}
