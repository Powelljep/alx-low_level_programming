#include "main.h"
/**
 * int _abs - computes the absolute value of an integer.
 * @val: an int to return its abs value

 * Description: a function that computes the
 * absolute value of an integer.
 * Return: returns and in value;
 */
int _abs(int val)
{
	if (val >= 0)
		return val;
	return (unsigned int) val;
}
