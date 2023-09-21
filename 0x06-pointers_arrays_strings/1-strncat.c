#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: our parameter
 * @dest: another parameter
 * @n: another one
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	i++;
	while (j <= (n-1))
	{
	dest[i] = src[j];
	j++;
	i++;
	}
	return (dest);
	putchar('\n');
}
