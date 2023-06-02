#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * str: string to capitalize its words
 *
 * description: a function that capitalizes all words of a string.
 * Return: Returns a string with capitalized words.
 */
char *cap_string(char *str)
{
        int sep[] = {32, 9, 10, 32, 59, 46, 33, 63, 34, 40, 41, 123, 125};
        int i = 0, j, k = 65, l = 0, m = 97, n, o = 0, caps[26] small[26];
        
        for (j = 0; j < 26; j++)
        {
                *(caps + j) = k++;
                *(small + j) = m++;
        }
        while (*(str + i) != '\0')
        {
                for(n = 0; n < 26; n++)
		{
			while (*(sep + 0) != '\0')
			{
				if(*(str + i) - 0 == *(sep + o))
					*(str 
			}
		}

                i++;
        }

}
