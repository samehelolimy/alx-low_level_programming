#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: first parameter
 * @n: second parameter
 * Return: reversed array
*/
void reverse_array(int *a, int n)
{
	int i = 0;

	while (a[i])
		i++;
	while (a[i] != '\0' && i != n)
	{
		printf(a[i]);
		i--;
	}
	a[i] == '\0';
	return (a);
}

