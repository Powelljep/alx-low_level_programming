#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print - a function that prints a struct dog
 * @d: struct dog to print
 *
 * Description:a function that prints a struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
