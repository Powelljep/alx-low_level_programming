#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to copy to
 * @src: strint to coppy from
 *
 * Description: a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;	
	}
	*(dest + i) = '\0';
	return (dest);
}
