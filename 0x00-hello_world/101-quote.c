#include <unistd.h>
/**
 * main - prints exactly and that piece of art is useful
 * " - Dora Korpar, 2015-10-19
 *
 * Description: a C program that prints exactly and that piece
 * of art is useful" - Dora Korpar, 2015-10-19, followed by a
 * new line, to the standard error.
 * Return: 1
 */
int main(void)
{
	char val[] = "and that piece of art is useful\" - 
		Dora Korpar, 2015-10-19\n";

	write(2, val, sizeof(va) - 1);
	return (1);
}
