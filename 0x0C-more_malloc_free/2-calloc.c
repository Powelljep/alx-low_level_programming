#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmeb: number of elements in the array 
 * @size: size of individual elements in the array in bytes
 *
 * Return: returns pointer to array or NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;
	
	if (nmeb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(size) * nmeb);
	if (!p)
		return (NULL);
	while (i < nmeb)
	{
		*(p + i) = 0;
		i++;
	}

	return (p);
}
