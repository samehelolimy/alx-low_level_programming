#include "main.h"

/**
 * print_alphabet -  printing alphabet in lowercase
 * a - z 10 times
*/
        void print_alphabet_x10(void)
        {
	int x = 1;
	
	while (x <= 10)
	{
        char c = 'a';

        while (c <= 'z')
        {
        putchar(c);
        c++;
        }
	x++;
	}
        putchar('\n');
        }
