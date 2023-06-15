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
	int sum = 0, i;

	if (argc < 2)
	{
		printf("%d\n", sum);
	}
	for (i = 0; i < argc; i++)
	{
		if (!isdigit(atoi(*(argv + i))))
		{
			printf("Error\n");
			return (1);
		}
		sum *= atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
