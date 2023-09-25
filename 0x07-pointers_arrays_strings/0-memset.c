#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: first parameter
 * @b: second parameter
 * @n: third one
 * Return: success
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *s;

	s = &n;

	for (i = 0 ; i <= n ; i++)
	{
		*s = b;
	}
	return (s);
}
