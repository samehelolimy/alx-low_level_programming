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
	return (1);
	putchar (43);
	}
	else if (n < 0)
	{
	return (-1);
	putchar (45);
	}
	else if (n == 0)
	{
	return (0);
	putchar (48);
	}
	putchar('\n');
	return (0);
	}
