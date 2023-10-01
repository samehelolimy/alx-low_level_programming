#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: first parameter
 * sqr - returns result for sqrt
 * @val: assistant parameter
 * Return: success
*/
int sqr(int n, int val);
int _sqrt_recursion(int n)
{
return (sqr(n, 1));
}

/**
 * sqr - assistant fun
 * @val: assistant parameter
 * @n: parameter
 * Return: success to _sqr
*/
int sqr(int n, int val)
{
	if ((val * val) == n)
		return (val);
	else if ((val * val) < n)
		return (sqr(n, val + 1));
	else
		return (-1);
}
