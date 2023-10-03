#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: first parameter
 * @c: second parameter
 * Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
	{
		n[size] = c;
		return (n);
	}
}

