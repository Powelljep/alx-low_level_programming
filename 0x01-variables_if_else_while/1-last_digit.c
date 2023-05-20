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
	if (n == 0 )
		printf(" and is 0");
	else if (n <6 && n != 0)
		printf(" and is less than 6 and not 0");
	else if (n > 5)
		printf(" and is greater than 5");
	return (0);
}
