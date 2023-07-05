#include "main.h"
/**
 * int is_prime_number - a function that returns 1 if
 * the input integer is a prime number, otherwise return 0.
 * @n: integer to check
 *
 * Return: 1 if is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	
	return (n % is_prime_number(n-1) == 0 ? 0 : 1);
}
