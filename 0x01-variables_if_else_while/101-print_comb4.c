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
        int y, z;

        while (x <= 9)
        {
        y = 0;

        while (y <= 9)
        {
	z = 0;

	while (z <= 9)
	{
        if (z > x && z > y && y > x && x != y != z)
        {
        putchar (x + 48);
        putchar (y + 48);
	putchar (z + 48);

        if (x + y + z != 24)
        {
        putchar (',');
        putchar (' ');
        }
        }
        z++;
        }
	y++;
	}
        x++;
        }
        putchar ('\n');
        return (0);
}
