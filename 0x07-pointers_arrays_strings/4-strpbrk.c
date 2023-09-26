#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: first parameter
 * @accept: second parameter
 * Return: success
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
		if (s[i] == accept[j])
		{
		return (s);
		}
		}
	}
		return ('\0');
}
