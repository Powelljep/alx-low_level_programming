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
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if (i == 48 && j == 48 && k == 48 && l == 48)
						continue;
					putchar(i);
					putchar(k);
					putchar(32);
					putchar(j);
					putchar(l);
					if (i < 58 && j < 57 && k < 58 && l < 58)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	return (0);
}
