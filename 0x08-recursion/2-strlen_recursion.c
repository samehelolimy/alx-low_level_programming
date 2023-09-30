#include "main.h"
/**
 * _strlen_recursion - prints a string
 * @s: our parameter
 * Return: success
*/
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s)
	{
		c++;
		_strlen_recursion(s + 1);
	}
	return (c);
}
