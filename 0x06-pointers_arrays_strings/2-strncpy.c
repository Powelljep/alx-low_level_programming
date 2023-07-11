#include "main.h"
/**
 * _strncpy -  a function that copies a string
 * @dest: first param to copy to
 * @src: second param to copy from.
 * @n: part of the string to copy to dest
 *
 * Description:a function that copies a string.
 * Return: a copy of the new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		*(dest + j) = *(src + j);
	}

	return (dest);
}
