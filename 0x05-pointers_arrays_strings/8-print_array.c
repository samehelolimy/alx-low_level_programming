#include "main.h"
/**
 * print_array - print_array
 * @a: first parameter
 * @n: second parameter
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; a[i] < '\0' ; i++)
	{
		printf("%d", a[i]);
		printf(',');
	}
}
