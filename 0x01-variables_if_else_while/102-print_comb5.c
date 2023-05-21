#include <stdio.h>
/**
 * main - program entry point
 *
 * Description: a program that prints all
 * possible combinations of two two-digit numbers
 * Return: returns 0 if the program runs successfully.
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i >= j)
				continue;
			putchar(i);
			putchar(i);
			putchar(32);
			putchar(i);
			putchar(j);
			putchar(44);
		}
	}
	putchar('\n');
	return (0);
}
