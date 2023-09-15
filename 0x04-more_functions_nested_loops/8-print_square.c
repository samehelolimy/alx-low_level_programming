#include "main.h"

/**
 *Description: print_square -  printing a square
 * @size: our parameter
*/
void print_square(int size)
{

	int i, j;

	if (size <= 0)
	putchar('\n');
	else
	{
	for (i = 1 ; i <= size ; i++)
	{
	for (j = 1 ; j <= size ; j++)
	{
	putchar(35);
	}
	putchar(35);
	putchar('\n');
	}
	}
}
