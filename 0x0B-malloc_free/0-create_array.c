#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the array.
 * @c: char to initialize the array with
 *
 * Return: Returns NULL if size = 0.
 * Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(sizeof(char) * size);
	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			*(p + i) = c;
		}
		return (p);
	}
	return (NULL);
}
