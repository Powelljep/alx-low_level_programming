#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string.
 * @s: string to return the length of.
 *
 * Description: a function that returns the length of a string.
 * Return: int length of string
 */
int _strlen(char *s)
{
	int index_value = 0;

	while (*(s + index_value) != '\0')
	{
		index_value++;
	}
	return (index_value + 1);
}
