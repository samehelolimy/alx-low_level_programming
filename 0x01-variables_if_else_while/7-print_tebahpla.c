#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starting point
 * description: print the alphabet in lowercase using putchar
 * Return: 0 (Successsed)
*/
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
	putchar(x);
	x--;
	}
	putchar('\n');
	return (0);
}
