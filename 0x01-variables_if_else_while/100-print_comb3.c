#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starting point
 * description: printing all possible compination of two digits
 * Return: 0 (Successsed)
*/
int main(void)
{
	int x = 0;
	int y;

	while (x <= 9)
	{
	y = 0;

	while (y <= 9)
	{
	if (y > x && x != y)
	{
	putchar (y + 48);
	putchar (x + 48);
	}
	if ((x + y) != 17)
	{
	putchar (',');
	putchar (' ');
	}
	y++;
	}
	x++;
	}
	return (0);
}
