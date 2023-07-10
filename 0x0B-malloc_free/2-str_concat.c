#include <stdlib.h>
#include "main.h"
/**
 * str_concat -  concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Description: The returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1, followed by the
 * contents of s2, and null terminated
 * Return: return NULL on failure or pointer to the newly created
 * string.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, l, m;
	char *p;

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	i++;
	k = i + j;
	p = malloc(sizeof(char) * k);
	if (p == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
	{
		*(p + l) = *(s1 + l);
	}
	j++;
	for (m = 0; m < j; j++)
	{
		*(p + i++) = *(s2 + l);
	}
	return (p);
}
