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

	while (c <= 'z' && c != 'q' && c != 'e')
	{
	putchar(c);
	c++;
	continue;
	}
	putchar ('\n');
	return (0);
}
