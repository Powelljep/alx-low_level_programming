#include "main.h"
/**
 * _strncpy -  a function that copies a string
 * @dest: first param to copy from
 * @src: second param to copy to.
 * @n: part of the string to copy to dest
 *
 * Description:a function that copies a string.
 * Return: a copy of the new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	while (*(dest + i)!= '\0')
	{
		i++;
	}

	j = 0;
	while (*(src + j) != '\0')
	{
		j++;
	}
	if (n >= i)
		return (src);
	for (k = 0; k < n; k++)
	{
		*(dest + k) = *(src + k);
	}
	return (dest);
}
