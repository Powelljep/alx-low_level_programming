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
		for(j = 49; j <= 56; j++)
		{
            		if(i == 56 && j == 57)
            		{
                		break;
            		}
			putchar(i);
			putchar(j);
                  	putchar(44);
                  	putchar(32);
       		}
	}	
	return (0);
}
