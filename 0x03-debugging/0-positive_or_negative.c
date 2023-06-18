#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - the entry point
 *
 * Descriciption: prints is positive  if n is positive
 * is zero if n is 0 or is negathive otherwise.
 * Return: returns integer value of 0 if the program ran succesfully
 */
void positive_or_negative(int i)
{
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n > 0)
        {
                printf("%d is positive\n", n);
        } else if (n == 0)
        {
                printf("%d is zero\n", n);
        } else
        {
                printf("%d is negative\n", n);
        }
}
