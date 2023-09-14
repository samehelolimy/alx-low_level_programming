#include "main.h"

/**
 *description: print_most_numbers - prints from 0 to 9
*/
void print_most_numbers(void)
{
	for (int i = 48 ; i <= 57 ; i++)
	{
	if (i == 50 || i == 52)
	continue;
	putchar(i);
	}
	putchar('\n');
}
