#include <stdio.h>
/**
 * print_times_table - prints the n times table.
 * @n: int value to create table for.
 *
 * Description: a function that prints the n
 * times table, starting with 0.
 * Returns: returns void
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i * j < 10)
			{
				if (j == 0)
					printf("%d", i * j);
				else
					printf("  %d", i * j);
			}
			if (j < n)
				printf(",");
			if (j == n)
				printf("\n");
			else
				printf(" ");
		}
	}
}
