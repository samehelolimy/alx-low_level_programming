#include "main.h"
/**
 * print_name - prints a name
 * @name: first par
 * @f: function parameter
 * Return: namee
*/
void print_name(char *name, void (*f)(char *))
{
	f = name;
	putchar (f);
}
