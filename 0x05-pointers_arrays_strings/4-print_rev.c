#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: our parameter
*/
void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	while (i--)
	{
	putchar(s[i]);
	}
}

