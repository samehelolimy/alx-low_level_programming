/**
 * rev_string - reverse a string
 * @s: - our parameter
*/
#include "main.h"
void rev_string(char *s)
{
	int i;

	while (s[i])
	{
	i++;
	while (i--)
	putchar(s[i]);
	}
	putchar('\n');
}
