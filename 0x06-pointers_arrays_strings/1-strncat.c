#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: first param
 * @src: second param
 * @n: third param
 *
 * Description: a function that concatenates two strings
 * Return: returns the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;
	
	i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	
	for (len = 0; len < j; len++)
	{
		if (len == n)
			break;
		*(dest + i + len) = *(src + len);
	}
	return (dest);
}
