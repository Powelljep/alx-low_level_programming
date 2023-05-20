#include <stdio.h>
/**
 * main - entry point to my program
 *
 * Description: prints the alphabet in lowercase.
 * Return: returns 0 if the program run successfully
 */
int main(void)
{
	int i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
