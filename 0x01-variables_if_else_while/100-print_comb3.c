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
	int x, y;

	while (x <= 9)
	{
	while (y <= 9)
	{
	if (x > y)
	{
	putchar ('y' + 0);
	putchar ('x' + 0);
	y++;
	}
	else if (y > x)
	{
	putchar ('x' + 0);
	putchar ('y' + 0);
	}
	y++;
	putchar (',');
	}
	x++;
	}
	return (0);
}
