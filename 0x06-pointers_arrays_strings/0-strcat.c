#include "main.h"
/**
 *_strcat - concatenating two strings
 *@dest: first parameter
 *@src: second parameter
 *Return: *dest success
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i] != '\0')
	i++;
	j = 0;

	while (src[j] != '\0')
	{
	dest[++i] = src[j++];
	}
	return (dest);
	putchar('\n');
}
