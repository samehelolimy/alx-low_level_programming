#include <stdio.h>

/**
 *Description: main  - entry point
 *Return: 0 Success
*/
int main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
		{
		putchar('F');
		putchar('i');
		putchar('z');
		putchar('z');
		{
		else if (i % 5 == 0)
		{
		putchar('B');
		putchar('u');
		putchar('z');
		putchar('z');
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
		putchar('F');
		putchar('i');
		putchar('z');
		putchar('z');
		putchar('B');
		putchar('u');
		putchar('z');
		putchar('z');
		}
		else
		{
		putchar(i);
		}
		if (i != 100)
		putchar(' ');
		else
		putchar('\n');
		}
		return (0);
}
