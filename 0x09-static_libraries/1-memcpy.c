#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: sucess
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
