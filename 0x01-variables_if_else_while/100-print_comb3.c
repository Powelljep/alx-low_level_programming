#include <stdio.h>
/**
 * main - entry point to the program
 *
 * Description:a program that prints all possible
 * different combinations of two digits
 * Return: returns 0 when the program runs successfully.
 */
int main(void)
{
	int i;
	int j;
	for(i = 48; i <= 57; i++)
	{
		for(j = 48; j <= 57; j++)
		{
  			putchar(i);
            		putchar(j);
            		if(i == 57 && j == 57)
            		{
                		continue;
            		} else
            		{
                  		putchar(44);
                  		putchar(32);
            		}
       		}
	}	
	return (0);
}
