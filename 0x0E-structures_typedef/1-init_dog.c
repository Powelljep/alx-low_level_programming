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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
