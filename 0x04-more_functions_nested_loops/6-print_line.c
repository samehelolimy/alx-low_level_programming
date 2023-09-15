#include "main.h"

/**
 * print_line -  printing a straight line
 * ________
 * @n: our parameter
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	putchar('\n');
	else
	{
	for (i = 1 ; i <= n ; i++)
	putchar(95);
	putchar('\n');
	}
}
