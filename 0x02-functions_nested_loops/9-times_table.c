#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Description: a function that prints the 9
 * times table, starting with 0.
 * Return: returns void.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j * i < 10)
				printf(" ");
			printf("%d", i * j);
			if (j != 9)
				printf(",");
			if (j == 9)
				printf("\n");
			else
				printf(" );
		}
	}
}
