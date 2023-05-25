#include <stdio.h>
/**
 * main - the first 50 Fibonacci numbers
 *
 * Description:  a program that prints the
 * first 50 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 * Return: returns 0.
 */
int main(void)
{
	int counter = 1, prev = 1, curr = 2, next , sum;

	while( counter <= 50)
	{
		sum += prev + curr;
		next += prev + curr;
		prev = curr;
		curr = next;
		couter ++;

	}
}
