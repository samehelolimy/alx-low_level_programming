#include "main.h"

/**
 * print_diagonal -  printing a diagonal line
 * diagonal
 * @n: our parameter
*/
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	putchar('\n');
	else
	{
	for (i = 1 ; i <= n ; i++)
	putchar(' \');
	putchar('\n');
	}
}
