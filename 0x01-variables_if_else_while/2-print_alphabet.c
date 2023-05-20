#include <stdio.h>
/**
 * main - entry point to my program
 *
 * Description: prints the alphabet in lowercase.
 * Return: returns 0 if the program run successfully
 */
int main()
{
	for (int i = 98; i <= 122; i++)
	{
		putchar("%c\n", i);
	}
	return (0);
}
