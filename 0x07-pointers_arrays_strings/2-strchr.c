#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string to locate from.
 * @c: character to locate.
 *
 * Description: a function that locates a character in a string.
 * Return: Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
		return (NULL);

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		{
			s++;
		}
	}
	return (NULL);
}
