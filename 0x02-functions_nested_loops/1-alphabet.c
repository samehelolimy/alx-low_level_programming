#include "main.h"

/**
 * main - starting point
 * description: printing alphabet in lowercase
 * Return: 0 (Successsed)
*/
int main(void)
{
	char x = 'a';
	while (x <= 'z')
	{
	putchar(x);
	x++;
	}
	putchar('\n');
	return (0);
}
