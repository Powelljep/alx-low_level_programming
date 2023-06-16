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
	char * rs;
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i > -1)
	{
		*(rs + j) = *(s + i);
		j++;
		i--;
	}
	s = rs;
}
