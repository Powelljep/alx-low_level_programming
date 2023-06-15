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
	int num1, num2, sum;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = (int)*argv[1];
		num2 = (int)*argv[2];
		sum = num1 * num2;
		printf("%d", num1);
		printf("%d", num2);
		printf("%d", sum);
		printf("%d\n", sum);
		return (0);
	}
}
