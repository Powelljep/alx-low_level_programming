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
		*s1 = "";
	if(!s2)
		*s2 = "";
	p = malloc(sizeof(*s2) + n);
	if (!p)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	if (strlen(*s2) == (int) n || strlen(*s2) > (int) n)
	{
		n = (unsigned int) strlen(*s2);
	}
	while (*(s2 + j) != '\0')
	{
		if (j == n)
			break;
		*(p + i) = *(s2 + j);
		i++;
		j++;
	}
	*(p + i) = '\0';
	return (p);
}
