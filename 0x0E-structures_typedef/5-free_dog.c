#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: dog to free
 *
 * Return: returns nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
