#include <stddef.h>
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
	int n = 0, i = 0;
	char elem;

	while (*(s + i) != '\0')
	{
		n++;
	}

	while (*(s + i) != '\0' )
	{
		elem = *(s + i);
		*(s + i) = *(s + n);
		if ( i == n || n - i == 1)
			break;
		*(s + n) = elem;
		i++;
		n--;
	}

}
