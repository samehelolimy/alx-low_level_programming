#include "main.h"
/**
 * string_toupper - changs lowercase to uppercase
 * @str: pointer parameter
 * Return: uppercase array
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return	str[i]
}
