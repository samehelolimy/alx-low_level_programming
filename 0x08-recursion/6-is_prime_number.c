#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: my parameter
 * @x: another parameter
 * Return: success
*/
int is_prime_number(int n,int x)
{

	if (x != 0 && x != 1 && n % (is_prime_number(n)) != 0)
		return (1);
	else
		return (0);
}
