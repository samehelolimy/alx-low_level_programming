#include "main.h"

/**
 * print_triangle -  printing a triangle
 * @size: our parameter
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	putchar('\n');
	else
	{
	for (i = 1 ; i <= size ; i++)
	{
	for (j = 1; j <= size ; j++)
	{
	if ((i + j) <= size)
	putchar(' ');
	else
	putchar('#');
	}
	putchar('\n');
	}
	}
}
