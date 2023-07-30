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
		return NULL;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = strdup(name);
	if (new->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);

}
