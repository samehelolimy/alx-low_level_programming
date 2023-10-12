#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: first par
 * @f: function parameter
 * Return: namee
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
