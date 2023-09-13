#include "main.h"

/**
 * print_alphabet -  printing alphabet in lowercase
 * a - z
*/
	void print_alphabet(void)
	{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	}
