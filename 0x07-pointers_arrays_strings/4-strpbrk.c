#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: first parameter
 * @accept: second parameter
 * Return: success
*/
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; j != '\0'; j++)
		{
		if (*s == accept[j])
		return (s);
		}
		s++;
	}
		return ('\0');
}
