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
	int i = 0, j = 0, strsize = 0, k = 0, l = 0;
	char *p;

	if (s1 != NULL)
	{
		while (*(s1 + i) != '\0')
		{
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (*(s2 + j) != '\0')
		{
			j++;
		}
	}
	strsize = i + j + 1;
	p = malloc(sizeof(char) * strsize);
	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (*(s1 + k) != '\0')
		{
			*(p + k) = *(s1 + k);
			k++;
		}
	}
	if (s2 != NULL)
	{
		while (*(s2 + l) != '\0')
		{
			*(p + i) = *(s2 + l);
			i++;
			l++;
		}
	}
	*(p + strsize) = '\0';
	return (p);
}
