#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @num: num to get last digit
 *
 * Description: a function that prints
 * the last digit of a number.
 * Return: returns last digit of num.
 */
int print_last_digit(int num)
{
	int lstdgt = num%10;
	_putchar(lstdgt);
	return (lstdgt);
}
