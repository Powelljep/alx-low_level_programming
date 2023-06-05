#include "main.h"
/**
 * _memset -  fills memory with a constant byte.
 * @s: pointer to the memory to be filled.
 * @b: constant to be use to fill the memory.
 * @n: first total number of bytes to be filled with constany b.
 *
 * Return: returns pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0, i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
