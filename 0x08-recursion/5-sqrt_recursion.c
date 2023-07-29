#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find its square root.
 *
 * Return: returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	int val = n;
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	_sqrt_recursion(n - 1);
	if (n * n == val)
	       return (n);	

}
