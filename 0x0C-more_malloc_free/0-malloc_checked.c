#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of the memory to allocate
 *
 * Return: Returns a pointer to the allocated memory.
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (!p)
		return (98);
	return (p);
}
