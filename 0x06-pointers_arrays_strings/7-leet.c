#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @str: string to be encoded.
 *
 * Description:a function that encodes a string into 1337.
 * Return: returns encoded string
 */
char *leet(char *str)
{
	int i = 0, j = 0;
	char small[] = {'a', 'e', 'o', 't', 'l'};
	char caps[] = {'A', 'E', 'O', 'T', 'L'};
	char nums[] = {'4', '3', '0', '7', '1'};

	while (*(str + i) != '\0')
	{
		while (j < 5)
		{
			if (*(str + i) == *(small + j) || *(str + i) == *(small + j))
				*(str + i) = *(nums + j);
			j++;
		}
		i++;
	}
	return (str);
}
