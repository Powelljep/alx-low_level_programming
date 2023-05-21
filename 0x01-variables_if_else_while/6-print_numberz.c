#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print numbers in ascii.
 * Return: returns 0 when the program runs successfully.
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
