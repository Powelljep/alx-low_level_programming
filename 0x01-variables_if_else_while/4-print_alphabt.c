#include <stdio.h>
/**
 * main - entry point of our program
 *
 * Decription: prints the alphabet in lowercase, followed by a new line.
 * Return: retuns 0 if ran succesfully.
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
