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
	char u = 'A';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}

	while (u <= 'Z')
	{
	putchar(u);
	u++;
	}
	putchar ('\n');
	return (0);
}
