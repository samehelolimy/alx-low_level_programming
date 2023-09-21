#include "main.h"
/**
 * _strncat
 * @src: our parameter
 * @dest: another parameter
 * @n: another one
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int n;

	while (dest[i] != '\0')
	i++;
	while (j <= n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
