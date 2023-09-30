#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: our parameter
 * Return: success
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	putchar(_puts_recursion(*s));
}
