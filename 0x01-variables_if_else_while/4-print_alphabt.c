#include <stdio.h>
/**
 * main - entry point of our program
 *
 * Decription: prints the alphabet in lowercase, followed by a new line.
 * Return: retuns 0 if ran succesfully.
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122 ; i++)
	{
            if (i==101 || i==113)
		    continue;
            putchar(i);
        }
	putchar('\n');
	return (0);
}
