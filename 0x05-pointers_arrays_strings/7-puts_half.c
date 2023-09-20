#include "main.h"
/**
 * puts_half - puts_half
 * @str: our parameter
*/
void puts_half(char *str)
{
	int i, x;

	while (i >= (x / 2))
	{
		x = (strlen(str));
		printf("%c", str[i]);
		if ((x % 2) != 0)
		{
		printf("%c", str[(x - 1) / 2]);
		}
		i++;
	}
	printf("\n");
}
