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
	putchar ('y + x' + 48);
	y++;
	else if (y > x)
	{
	putchar ('x + y' + 48);
	}
	y++;
	putchar (',');
	}
	x++;
	}
	return (0);
}
