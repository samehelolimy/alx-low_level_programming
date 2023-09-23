#include "main.h"
/**
 * *_strncpy - copies a string
 * @src: our parameter
 * @dest: another parameter
 * @n: another one
 * Return: the string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int n = 0;

	while (src[n] != '\0')
	{
	dest[n] = src[n];
	n++;
	}
	dest[n] = '\0';

	return (dest[n]);
}

