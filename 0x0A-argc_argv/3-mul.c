#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: param count
 * @argv: array of params
 *
 * Return: returns 1 if error or 0 otherwise
 */
int main(int argc, char *argv[])
{
	int num1 = argv[1], num2 = argv[2], sum = num1 * num2;

	if (argc < 3 && argv[])
	{
		printf("Error");
		return (1)
	}
	printf("%d", sum);
	return (0);
}
