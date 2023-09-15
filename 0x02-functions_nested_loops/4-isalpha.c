#include "main.h"

/**
 * _isalpha - our function
 * Description:  _isalpha - checking alphabet character
 * Return: 1 if true
 * 0 if false
 * @c: our parameter
*/
	int _isalpha(int c)
	{
	if (c >= 97 && c <= 122)
	return (1);
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
	}
