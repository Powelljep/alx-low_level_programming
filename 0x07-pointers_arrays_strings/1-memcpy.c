#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest:destination to copy  bytes from memory area
 * @src: memory area to copy from.
 * @n:number of  bytes from memory area to copy.
 *
 * Description:a function that copies memory area.
 * Return: Returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	if (i < n)
		dest[i] = '\0';

	return (dest);
}
