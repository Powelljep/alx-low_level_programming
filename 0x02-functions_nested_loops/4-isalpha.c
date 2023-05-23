#include "main.h"
/**
 * _isalpha - checks alphabetic character
 * @c: is an int value
 *
 * Description: a function that
 * checks for alphabetic character
 * Return: returns 1 if c is a letter, lowercase or uppercase
 * returns 0 otherwise
 */
int _isalpha(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
		if (c == i)
			return (1);
	return (0);
}
