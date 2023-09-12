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
	int x = 0;

	while (x <= 9)
	{
	putchar(x + 48);
	if (x != 9)
	{
	putchar (',');
	putchar (' ');
	}
	x++;
	}
	putchar('\n');
	return (0);
}
