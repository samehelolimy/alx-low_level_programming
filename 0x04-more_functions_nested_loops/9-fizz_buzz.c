#include "main.h"

/**
 *Description: main  - entry point
 *Return: 0 Success
*/
int main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		printf("Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
		printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
		printf("FizzBuzz");
		else
		{
		printf("%d", i);
		}
		if (i != 100)
		printf(" ");
		else
		printf("\n");
		}
		return (0);
}
