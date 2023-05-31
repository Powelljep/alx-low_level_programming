#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string to reverse
 *
 * Description: a function that reverses a string
 * Return: void
 */
void rev_string(char *s)
{
	int counter = 0, len = 0;
	char val;

	while (*(s + len) != '\0')
	{
		len++;
	}

	while (len-1 > 0)
	{
		val = *(s + counter);
		*(s + counter) = *(s + len - 1);
		*(s + len -1) = val;
		counter ++;
		len--;
	}
}
