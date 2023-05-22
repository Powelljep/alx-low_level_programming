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
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				putchar(i);
                        	putchar(i);
                        	putchar(32);
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
