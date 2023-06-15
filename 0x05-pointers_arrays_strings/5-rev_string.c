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
	int counter = 0, len = 0, counter2;
	char val;

	while (*(s + len) != '\0')
	{
		len++;
	}
	
	if ((len - 1) % 2 == 0)
		counter2 = (len - 1) / 2;
	else 
		counter2 = (len - 2) / 2 + 1;

	while (counter2  > 0)
	{
		val = *(s + couter);
		*(s + counter) = *(s + (len - 1));
		*(s + (len - 1)) = *(s + );
		counter++;
		len--;
	}
}
