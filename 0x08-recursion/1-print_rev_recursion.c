#include "main.h"
/**
 * _print_rev_recursion - prints a string
 * @s: our parameter
 * Return: success
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
}
