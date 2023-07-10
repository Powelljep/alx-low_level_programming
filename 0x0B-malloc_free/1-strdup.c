#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to return its duplicate.
 *
 * Return: Returns NULL if str = NULL.On success, the _strdup function
 * returns a pointer to the duplicated string. It returns NULL if
 * insufficient memory was available
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		i++;
	}
	p = malloc((sizeof(char) * i) + 1);
	if (p == NULL)
		return (NULL);
	p = str;
	return (p);

}
