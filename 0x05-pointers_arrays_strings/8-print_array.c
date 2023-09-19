#include "main.h"
/**
 * print_array - print_array
 * @a: first parameter
 * @n: second parameter
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
	{
		if (a[i] != '\0')
		printf("%d", a[i]);
		if (a[i] < a[n])
		printf(", ");
	}
}
