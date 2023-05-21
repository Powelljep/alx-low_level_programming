#include <stdio.h>
/**
 * main - program entry point
 *
 * Description: program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * Return: returns 0 if the program ran successfully.
 */
int main(void)
{
	int i;
	for (i = 48; i <= 57; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
