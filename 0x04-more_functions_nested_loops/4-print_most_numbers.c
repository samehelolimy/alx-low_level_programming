#include "main.h"

/**
 *description: print_most_numbers - prints from 0 to 9
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
	if (i == 2 || i == 4)
	continue;
	putchar(i + 48);
	}
	putchar('\n');
}
