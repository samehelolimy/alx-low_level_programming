#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: first parameter
 * @src: second parameter
 * Return: copy value
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (x = 0 ; x < i ; x++)
	{
	dest[x] = src[x];
	}
	if (dest[x] == '\0')
	return (dest);
}
