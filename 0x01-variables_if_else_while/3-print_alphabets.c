#include <stdio.h>
/**
 * main - the entry point
 *
 * Description: Prints all lowercase and uppercase character
 * from A-Z
 * Return: return int value of zero on succesful compliation
 */
int main(void)
{
	int i = 97;
	int j = 65;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
}
