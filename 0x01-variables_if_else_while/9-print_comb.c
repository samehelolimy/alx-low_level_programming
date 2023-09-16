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
	int x = 48;

	while (x <= 57)
	{
	putchar(x);
	if (x != 57)
	{
	putchar `(',');
	putchar (' ');
	}
	x++;
	}
	putchar('\n');
	return (0);
}
