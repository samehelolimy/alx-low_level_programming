#include "main.h"
/**
 * puts_half - puts_half
 * @str: our parameter
*/
void puts_half(char *str)
{
	int i, x;

	for (i = 0 ; str[i] != '\0' ; i++)
		x++;
		for (x /= 2 ; str[x] != '\0' ; x++)
		{
		printf("%c", str[x]);
		}
	printf("\n");
}
