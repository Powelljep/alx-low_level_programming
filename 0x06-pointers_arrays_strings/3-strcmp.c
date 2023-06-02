#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: first string to compare to the second one.
 * @s2: secon string
 *
 * Description: a function that compares two strings.
 * Return: 1 if s1 and s1 are equal or 0 otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k, val = 0;

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	for (k = 0; k <= i; k++)
	{
		if (*(s1 + k) - *(s2 + k) == 0)
			continue;
		else
			val = *(s1 + k) - *(s2 + k);
	}
	return (val);
}
