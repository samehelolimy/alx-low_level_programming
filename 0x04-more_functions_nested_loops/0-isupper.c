#include "main.h"

/**
 *description: _isupper  -  checks if uppercase or not
 * A - Z
 * Return: 1 if upper 0 if false
 * @c: our parameter
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	return (0);
	putchar('\n');
}
