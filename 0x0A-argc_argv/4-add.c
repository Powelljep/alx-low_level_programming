#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc - count of params
 * @argv - array of param strings
 *
 * Description: a program that adds positive numbers.
 * Return: returns 0 if successful or 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", sum);
	return (sum);
}
