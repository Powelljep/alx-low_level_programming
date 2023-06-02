#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to change to uppercase
 *
 * Description:  a function that changes all lowercase
 * letters of a string to uppercase.
 * Return: returns an new string in uppercase
 */
char *string_toupper(char *str)
{
	int i = 0, j;

	while (*(str + i) != '\0')
	{
		for (j = 65; j <= 90; j++)
		{
			if (*(str + i) - 0 == j)
			{
				continue;
			}
		}
		i++;
	}
}
