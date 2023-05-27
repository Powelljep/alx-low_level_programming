#include <ctype.h>
#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: parameter to check
 *
 * Description: a function that checks for uppercase character.
 * Return: Returns 1 if c is uppercase.
 * 0 otherwise
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i < 90; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
