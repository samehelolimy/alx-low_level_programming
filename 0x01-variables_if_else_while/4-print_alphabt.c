#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starting point
 * description: print the alphabet in lowercase
 * Return: 0 (Successsed)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		c++;
		putchar(c);
	}
	putchar ('\n');
	return (0);
}
