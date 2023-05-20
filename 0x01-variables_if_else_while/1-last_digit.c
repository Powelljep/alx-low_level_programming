#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - this is the entry point to our programe
 *
 * Description: prints n based on value whether greater than 5,
 * wether it's 0 or less than 6 and not 0
 * Return: returns 0 if the program runs succesfully otherwise
 * error is returned.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is", n);
	if (n % 10 == 0)
		printf(" %d and is 0\n", n % 10);
	else if (n % 10 < 6 && n != 0)
		printf(" %d and is less than 6 and not 0\n", n % 10);
	else if (n % 10 > 5)
		printf(" %d and is greater than 5\n", n % 10);
	return (0);
}
