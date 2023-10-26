#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: to be converted
 * Return: success
 */

void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8;
	int x = 0;

	while (b)
	{
		if (n & 1l << --b)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (!x)
		_putchar('0');
}
