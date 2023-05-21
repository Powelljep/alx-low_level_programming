#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints all
 * possible different combinations of three digits
 * Return: returns 0 on successful compilation.
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if ( i >= j && j >= k )
				       continue;
				putchar(i);
				putchar(j);
				putchar(k);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
