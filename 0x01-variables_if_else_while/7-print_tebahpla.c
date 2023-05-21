#include <stdio.h>
/**
 * main - program entry point
 *
 * Description: program that prints the lowercase
 * alphabet in reverse, followed by a new line.
 * Return: returns 0 if the program runs successfully.
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
