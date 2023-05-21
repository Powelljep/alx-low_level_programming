#include <stdio.h>
/**
 * main - entry point to the program
 *
 * Description: a program that prints all
 * possible combinations of single-digit numbers.
 * Return: returns 0 if the program runs.
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(44);
		if (i == 57)
		{
			continue;
		} else
		{
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
