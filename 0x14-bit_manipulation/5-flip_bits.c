#include "main.h"
/**
 * flip_bits - number of bits you would need to flip
 * @n: first par
 * @m: sec par
 * Return: success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		if (x & 1ul)
			count++;
		x = x >> 1;
	}
	return (count);
}

