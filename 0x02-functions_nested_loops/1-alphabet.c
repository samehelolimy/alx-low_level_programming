#include "main.h"

/**
 * main - starting point
 * description: printing alphabet in lowercase
 * Return: 0 (Successsed)
*/
	void print_alphabet(void)
	{
	char c = 'a';
	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	}
