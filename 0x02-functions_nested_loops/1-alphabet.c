#include "main.h"

/**
 * main - starting point
 * description: printing alphabet in lowercase
 * Return: 0 (Successsed)
*/
int main(void)
{
	void print_alphabet(char c)
	{
	char c = 'a';
	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	}
}
