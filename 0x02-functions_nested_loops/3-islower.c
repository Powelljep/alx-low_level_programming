#include "main.h"
/**
 * int - _islower - check if a letter is lowercase
 * @c: character to be checked.
 *
 * Description: checks for lowercase character
 * if any it returns 1 otherwise 0.
 * Return: returns an int value of 1 is c is lower
 * or 0 otherwise.
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
