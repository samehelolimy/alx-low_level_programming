#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first array
 * @s2: second array
 * Return: 0 if true and 1 if false
*/
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0 ; i == j ; i++)
	{
		if (s1[i] == s2[j])
		i++;
		j++;
		if (s1[i] == '\0' && s2[j] == '\0')
			return (0);
		else
			return (1);
	}
}
