#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Description: a program that prints the number of arguments passed into it.
 * Return: returns 0 if the prog runs or any other number otherwise.
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0])
	{
		printf("%d\n", *(argc - 1));
	}
	return (0);
}
