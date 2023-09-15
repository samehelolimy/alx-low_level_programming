#include "main.h"

/**
 *Description: print_square -  printing a square
 * ________
 * @size: our parameter
*/
void print_square(int size)
{

	int i, j;

	if (n <= 0)
	putchar('\n');
	else
	{
	for (i = 1 ; i <= n ; i++)
	{
	for (j = 1 ; j <= n ; j++)
	putchar('#');
	putchar('\n');
	}
	}
}
