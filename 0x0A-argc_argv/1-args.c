#include <stdio.h>

/**
 * main - print no og args
 * @argc: no of command line args
 * @argv: pointer to array of command line args
 * Return: success
 */

int main(in argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
