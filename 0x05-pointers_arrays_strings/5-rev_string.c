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
	int counter = 0, len = _strlen(s);
	char newstr[];

	while (len-1 > 0)
	{
		newstr[counter] = *(s + len - 1);
		counter ++;
		len--;
	}
}
