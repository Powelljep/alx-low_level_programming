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
	int i, j = 0;
	char *nest[];

	if (argc > 0 && argv[0])
	{
		for (i = 0; i < argc; i++)
		{
			char *nest = *(argv + i);

			while (*(nest + j) != '\0')
			{
				if (*(nest + j) == (char)32)
				{
					putchar('\n);
					continue;
				}
				putchar(*(nest + j));
				j++;
			}
			j = 0;
			
		}
	}
	return (0);
}
