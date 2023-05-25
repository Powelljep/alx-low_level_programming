#include <ctype.h>
/**
 * _isdigit - checks for a digit
 *
 * Description: a function that checks for a digit (0 through 9).
 * Return: Returns 1 if c is a digit
 * Returns 0 otherwise
 */
int _isdigit(int c)
{
	if(isdigit(c))
		return (1);
	return (0);
}
