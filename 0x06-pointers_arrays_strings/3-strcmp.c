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
	in equal = 0;

	for (i = 0 ; i == j ; i++)
	{
		if (s1[i] != s2[j])
		{
		equal = s1[i] - s2[j];
		}
		i++;
		j++;
	}
	return (equal);
}
