#include "main.h"

/**
 *description: print_most_numbers - prints from 0 to 9
*/
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
	if (i == 50 || i == 52)
	continue;
	putchar(i);
	i++;
	}
	putchar('\n');
}
