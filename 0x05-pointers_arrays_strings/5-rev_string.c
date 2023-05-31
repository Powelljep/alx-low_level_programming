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
	int len = _strlen(s) - 1, counter;
	char newstr[len];

	while (*(s + len) > != '')
	{
		newstr[counter] = *(s + len);
		counter ++;
		len--;
	}
}
