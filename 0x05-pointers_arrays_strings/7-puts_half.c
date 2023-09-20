#include "main.h"
/**
 * puts_half - puts_half
 * @str: our parameter
*/
void puts_half(char *str)
{
	int i;

	int x = (strlen(str));

	while (i >= (x / 2) && i <= (x - 1))
	{
		if ((x % 2) != 0)
		{
		printf("%c", str[(x - 1) / 2]);
		}
		else
		{
		printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
}
