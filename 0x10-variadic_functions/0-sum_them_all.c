#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameters
 * @n: our par
 * @...: int to sum
 * Return: success
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i = n;
	va_list ptr;

	if (!n)
	return (0);
	va_start(ptr, n);

	while (i--)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
