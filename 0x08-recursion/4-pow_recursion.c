#include "main.h"
/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: first parameter
 * @y: second parameter
 * Return: success
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	x = (x * x) * (y - 1);
	_pow_recursion(x, y);
	return (x);
}
