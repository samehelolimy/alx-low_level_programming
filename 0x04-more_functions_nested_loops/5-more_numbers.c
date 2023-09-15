#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void);
{
	int i, j, x;

	for (i = 1 ; i <= 10 ; i++)
	{
	for (j = 0 ; j <= 14 ; j++)
	{
	x = j;
	if (j > 9)
	{
	putchar(1 + 48);
	x = j % 10;
	}
	putchar(x + 48);
	}
	putchar('\n');
	}
}
