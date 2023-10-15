#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: no of command line args
 * @argv: pointer to array of command line args
 * Return: success
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
