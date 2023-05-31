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
	int counter = 0, len = _sitrlen(s);
	char newstr[] = {s[len-1]};

	while (len-1 > 0)
	{
		newstr[counter] = *(s + len - 2);
		counter ++;
		len--;
	}
}
