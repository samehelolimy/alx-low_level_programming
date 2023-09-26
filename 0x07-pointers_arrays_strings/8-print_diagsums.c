#include "main.h"
/**
 * print_diagsums - print sum of two diagonals
 * @a: first parameter
 * @size: second parameter
*/
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;

	size = 0;

	while (a[i][j])
	{
		size += a[i][j];
		i++;
		j++;
	}
		putchar(size + '0');
}
