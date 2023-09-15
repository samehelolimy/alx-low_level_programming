#include "main.h"

/**
 * print_diagonal -  printing a diagonal line
 * diagonal
 * @n: our parameter
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	putchar('\n');
	else
	{
	for (i = 1 ; i <= n ; i++)
	{
	for (j = 1 ; j < i ; j++)
	{
	putchar(' ');
	}
	putchar(92);
	putchar('\n');
	}
	}
}
