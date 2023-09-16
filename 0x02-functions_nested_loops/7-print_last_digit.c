#include "main.h"

/**
 * print_last_digit - our function
 * Description: print_last_digit  print last digit of n
 * Return: n
 * @n: our parameter
*/
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	x = (-1) * (n % 10);
	else
	x = n % 10;
	_putchar (x + '0');
	return (x);
}
