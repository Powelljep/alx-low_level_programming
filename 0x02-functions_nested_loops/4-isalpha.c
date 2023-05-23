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
	char i, j;

	for (i = 'A'; i <= 'Z'; i++)
		if (c == i)
			return (1);
	for (j = 'a'; j <= 'z'; j++)
		if (c == j)
			return (1);
	return (0);
}
