#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - entry point
 * description : positive or negative or zero
 * return : 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i The number is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i The number is negative\n", n);
	}
	else
	printf("%i The number is zero\n", n);
	return (0);
}
