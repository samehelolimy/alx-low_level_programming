#include "main.h"

/**
 * *malloc_checked - allocates memory
 * @b: int
 * Return: success
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
