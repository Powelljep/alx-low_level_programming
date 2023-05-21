#include <stdio.h>
/**
 * main - entry point to the program
 *
 * Description: program that prints all the numbers of
 * base 16 in lowercase, followed by a new line
 * Return: returns 0 if the program runs successfully.
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 15; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
