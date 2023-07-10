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
	int i = 0, j = 0, strsize = 0;
	char *p;

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	strsize = i + j + 1;
	p = malloc(sizeof(char) * strsize);
	if (p == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*p = *s1;
		p++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*(p + i + 1) = *s2;
		s2++;
	}
	*(p + strsize) = '\0';
	return (p);

}
