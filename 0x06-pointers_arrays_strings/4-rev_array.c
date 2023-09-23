#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: first parameter
 * @n: second parameter
 * Return: reversed array
*/
void reverse_array(int *a, int n)
{
	int i, j, s;

	for(i = 0 ; j = n-1 ; i < j ; i++ ; j--)
	{
	s = a[i];
	a[i] = a[j];
	a[j] = s;
	}
	return (a);
}

