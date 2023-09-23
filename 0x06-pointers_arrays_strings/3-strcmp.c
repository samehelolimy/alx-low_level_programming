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
		i++;
		j++;
		if (s1[i] == s2[j])
		return (0);
		else if (s1[i] > s2[j])
			return (' > 0');
		else if (s1[i] < s2[j])
			return (' < 0');
	}
}
