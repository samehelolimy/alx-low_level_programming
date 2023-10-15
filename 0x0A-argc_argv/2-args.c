#include <stdio.h>

/**
 * main - prints all args receives
 * @argc: no of command line args
 * @argv: pointer to array of command line args
 * Return: success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
