#include <ctype.h>
/**
 * _isupper - checks for uppercase
 * @c: parameter to check
 *
 * Description: a function that checks for uppercase character.
 * Return: Returns 1 if c is uppercase.
 * Returns 0 otherwise
 */
int _isupper(int c)
{
	int i;

	if (isupper(c))
		return (1);
	return (0);
}
