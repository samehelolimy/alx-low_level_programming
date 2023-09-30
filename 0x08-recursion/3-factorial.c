#include "main.h"
/**
 * factorial - returns a factorial of a number
 * @n: our parameter
 * Return: success
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
		return (n * factorial(n - 1));
}
