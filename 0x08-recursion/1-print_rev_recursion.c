#include "main.h"
/**
 * _print_rev_recursion - prints a string
 * @s: our parameter
 * Return: success
*/
void _print_rev_recursion(char *s)
{
        if (*s == '\0')
        {
        putchar(s - 1);
        _puts_recursion(s - 1);
        }
        else
        putchar('\n');
}
