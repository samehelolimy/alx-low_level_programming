#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: our parameter
 * Return: success
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	putchar('\n');
}
