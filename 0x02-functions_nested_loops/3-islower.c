#include "main.h"

/**
 * _islower - our function
 * Description:  _islower.c - checking lowercase character
 * Return: 1 if true
 * 0 if false
 * @c: our parameter
*/

	int _islower(int c)
	{
	if (c >= 97 && c <= 122)
	return (1);
	return (0);
	}
