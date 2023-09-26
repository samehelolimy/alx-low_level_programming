#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: first parameter
 * @accept: second parameter
 * Return: success
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

	while (s[i] != '\0')
	{
		for (int j = 0 ; accept[j] != s[i] ; j++)
		{
			if (accept[j] == '\0')
				return (s[i]);
		}
		i++;
	}
		return (s[i]);
}

