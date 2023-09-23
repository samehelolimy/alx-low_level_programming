#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: first parameter
 * @n: second parameter
 * Return: reversed array
*/
void reverse_array(int *a, int n)
{
	int i = 0, j = 0;

	while (a[i])
		i++;
	while (a[i] != '\0' && i < n)
	{
	a[j] = a[i];
	j++;
	i--;
	}
	a[j] = '\0';
	return (a);
}

