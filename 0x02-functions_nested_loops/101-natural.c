#include <stdio.h>
/**
 * main - prints sum of multiples
 *
 * Description: prints the multiples of natural
 * numbers which are multiples of 3 and 5.
 * Return: returns 0.
 */
int main(void)
{
	int i, sum;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
