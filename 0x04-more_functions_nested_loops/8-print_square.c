#include "main.h"

/**
 * print_line -  printing a straight line
 * ________
 * @n: our parameter
*/
void print_line(int n)
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
