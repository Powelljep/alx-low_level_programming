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
	int i = 0, j = 0, k = 0;
	char sval;

	while (*(s + i) != '\0')
	{
		i++;
	}
	if (i % 2 > 0)
		j = (i - 1) / 2 + 1;
	else
		j = i / 2;
	while (j > -1)
	{
		sval = *(s + k);
		*(s + k) = *(s + i);
		*(s + i) = sval;
		j--;
		i--;
	}

}
