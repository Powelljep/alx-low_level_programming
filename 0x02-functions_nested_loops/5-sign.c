#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: number to chek the sign
 *
 * Description: function that prints the sign of a number.
 * Return: returns 1 and prints + if n is greater than zero
 * or -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
       if (n > 0)
       {
	       _putchar('+');
	       return (1);
       } else if (n == 0)
       {
	       _putchar('0');
	       return (0);
       } else
       {
	       _putchar('-');
	       _putchar('1');
       }

}
