#include <stdio.h>
#include "main.h"

/**
 * main - prints the word _putchar.
 *
 * Description: prints putchar.
 * Return: returns 0 if the program runs successfully.
 */
int main(void)
{
	_putchar();
	
	return (0);
}

/**
 * _putchar - prints the string "_putchar".
 *
 * Description: the function prints the string putchar.
 * Return: the function returns void and prints putchar on the console.
 */
void _putchar(void) {

        putchar(95);
        putchar(112);
        putchar(117);
        putchar(116);
        putchar(99);
        putchar(104);
        putchar(97);
        putchar(114);
        putchar('\n');
}
