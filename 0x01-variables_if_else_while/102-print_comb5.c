#include <stdio.h>
/**
 * main - program entry point
 *
 * Description: a program that prints all
 * possible combinations of two two-digit numbers
 * Return: returns 0 if the program runs successfully.
 */
int main(void)
{
	int i, j, k, l;
        for (i = 48; i <= 57; i++)
        {
                for (j = 48; j <= 57; j++)
                {
                        for (k = 48; k<= 57; k++)
                        {
                                for (l = 49; l<= 57; l++)
                                {
                                    if (i == 57 && j == 57 && k == 57 && l == 57)
					    break;
				    if (i == k && j == l)
					    continue;
                                   	putchar(i);
                                        putchar(j);
                                        putchar(32);
                                        putchar(k);
                                        putchar(l);
                                        if (i == 57 && j == 57 &&k == 57 && l == 56)
						continue;
                                        putchar(44);
                                        putchar(32);
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
}
