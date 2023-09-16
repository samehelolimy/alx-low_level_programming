#include "main.h"

/**
 * print_sign - our function
 * Description:  print_sign - checking number + or - or 0
 * Return: 1 if positive ,return -1 if negative , return 0 if 0
 * @n: our parameter
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar (43);
	return (1);
	}
	else if (n == 0)
	{
	_putchar (48);
	return (0);
	}
	else if (n < 0)
	{
	_putchar (45);
	return (-1);
	}
}
