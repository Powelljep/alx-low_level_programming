#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: string to be appended to the first one.
 *
 * Description: a function that concatenates two strings.
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0, len;
	
	while (*(dest + j) != '\0')
	{
		j++;
	}
	
	i = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for (len = 0 ; len <= i; len++)
	{
		*(dest + j + len) = *(src + len);
	}
	
	return (dest);
}
