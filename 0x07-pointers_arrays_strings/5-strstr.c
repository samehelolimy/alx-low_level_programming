#include "main.h"
/**
 * _strstr - locates asubstring
 * @haystack: first parameter
 * @needle: second parameter
 * Return: success
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0 ; i != '\0'; i++)
	{
		for (j = 0 ; j != '\0' ; j++)
		{
		if (needle[j] == haystack[i])
		{
		return (&needle[j]);
		}
		}
		return ('\0');
	}
}

