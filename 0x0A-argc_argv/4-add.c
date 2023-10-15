#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: no of command line args
 * @argv: pointer to array of command line args
 * Return: success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
