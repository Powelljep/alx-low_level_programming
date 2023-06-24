#include <stdio.h>
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

	if ( name == NULL || !age || !owner)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);

}
