#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: a program that prints all arguments it receives.
 * Return: returns 0 if the programs runs successfuly or
 * any other number otherwise
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0 && argv[0])
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", *(argv + i));
		}
	}
	return (0);
}
