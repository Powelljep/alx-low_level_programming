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
	int i, j = 65, k = 0, l = 97, m, lower[26], upper[26];

	for (i = 0; i < 26; i++)
	{
		*(lower + i) = l++;
		*(upper + i) = j++;
	}
	
	while (*(str + k) != '\0')
	{
		for (m = 0; m < 26; m++)
		{
			if (*(str + k) == *(upper + m))
			{
				continue;
			} else if(*(str + k) == *(lower + m))
			{
				*(str + k) = *(upper + m);
			}
		}
		k++;
	}
	return (str);
}
