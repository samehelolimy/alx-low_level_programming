#include "main.h"

/**
 * print_line -  printing a straight line
 * _________
*/
void print_line(int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
	{
	if (n == 0)
	putchar('\n');
	putchar('_');
	putchar('\n');
}
