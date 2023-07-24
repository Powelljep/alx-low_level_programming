#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes of s2 to concatenate
 *
 * Return: Returns  concatenated string or NULL if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (j < (int) n && *(s2 + j) != '\0')
	{
		j++;
	}
	if ((int) n >= j)
		n = j;
	p = malloc(sizeof(char) * (i + n + 1));
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (*(s1 + i) != '\0')
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	while (j < (int) n && *(s2 + j) != '\0')
	{
		*(p + i) = *(s2 + j);
		i++;
		j++;
	}
	*(p + i) = '\0';
	return (p);
}
