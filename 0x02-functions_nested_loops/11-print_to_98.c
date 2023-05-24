#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from
 * n to 98, followed by a new line.
 *
 * Description: prints all natural
 * numbers from n to 98, followed by a new line.
 * Return: returns void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i < 98)
			printf(",");

	}
	printf("\n");
}
