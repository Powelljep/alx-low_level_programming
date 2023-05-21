#include <stdio.h>
/**
 * main - entry point to the program
 *
 * Description:a program that prints all possible
 * different combinations of two digits
 * Return: returns 0 when the program runs successfully.
 */
int main(void)
{
	int i;
	int j;
	for (i = 48; i <= 56; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j <= i)
				continue;
			putchar(i);
			putchar(j);
			if ( i == 56 && j == 57)
				continue;
			putchar(44);
			putchar(32);

		}
	}
	putchar('\n');
	return (0);
}
