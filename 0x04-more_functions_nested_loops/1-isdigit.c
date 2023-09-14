#include "main.h"

/**
 *description:_isdigit  -  checks if digit from 0 to 9
 * Return: 1 if true 0 if false
 * @c: our parameter
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	return (1);
	return (0);
	putchar('\n');
}
