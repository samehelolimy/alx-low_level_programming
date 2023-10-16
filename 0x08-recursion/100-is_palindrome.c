#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(ch *s);

/**
 * is_palindrome - checks if or not
 * @s: string to reverse
 * Return: success
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns len of string
 * @s: string to calculate length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks characters recursively
 * @s: string to check
 * @i: iterator
 * @len: len og string
 * Return: success
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
