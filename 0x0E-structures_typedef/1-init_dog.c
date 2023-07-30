#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: struct pointer
 * @name: dog name
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: a function that initialize a variable of type struct dog
 * Return:nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = strdup(name);
	d->owner = strdup(owner);
	if (name == NULL || owner == NULL)
	{
		free(d->name);
		free(d->owner);
		return;
	}
	d->age = age;
}
