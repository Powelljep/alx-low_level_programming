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
	int j;

	i = 0;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		*(dest + j) = *(src + j);
	}
	for (; j < n; j++)
	       *(dest + j) = '\0';	

	return (dest);
}
