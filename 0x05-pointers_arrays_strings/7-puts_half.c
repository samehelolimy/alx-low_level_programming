#include "main.h"
/**
 * puts_half - puts_half
 * @str: our parameter
*/
void puts_half(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		i++;
		for (i /= 2 ; str[i] != '\0' ; i++)
		{
		printf("%c", str[i]);
		}
}
	printf("%C", '\n');
}
