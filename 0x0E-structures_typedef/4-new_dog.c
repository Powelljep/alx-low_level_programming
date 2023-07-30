#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: a function that creates a new dog.
 * Return: dog_t or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || owner == NULL)
		return ((dog_t *)(NULL));
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return ((dog_t *)(NULL));
	newdog->name = strdup(name);
	newdog->owner = strdup(owner);
	if (newdog->owner == NULL || newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return ((dog_t *)(NULL));
	}
	newdog->age = age;
	return (newdog);

}
