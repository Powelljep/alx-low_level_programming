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
	if (d == null)
		printf("Name: (nil)");
	else
		printf("Name: %s\nAge: %d\nOwner: %s\n", d.name, d.age, d.owner);
}
