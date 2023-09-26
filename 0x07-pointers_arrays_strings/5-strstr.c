#include "main.h"
/**
 * _strstr - locates asubstring
 * @haystack: first parameter
 * @needle: second parameter
 * Return: success
*/
char *_strstr(char *haystack, char *needle)
{
	int j;
	char *p;

	while (*haystack)
	{
		for (j = 0 ; j != '\0' ; j++)
		{
		if (*haystack == needle[j])
		{
		p = &needle[j];
		return (p);
		}
		}
		haystack++;
	}
		return ('\0');
}

