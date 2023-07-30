#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call
 * to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size:  the new size, in bytes of the new memory block
 *
 * Returns: a pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp = ptr;
	int i = 0;

	if (new_size > old_size)
	{
		ptr = malloc(new_size);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		p = malloc(new_size);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!p)
		return (NULL);
	while (temp != NULL)
	{
		*(p + i) = *temp;
		i++;
		temp++;
	}
	return (p);
}
