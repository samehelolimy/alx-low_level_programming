#include "main.h"
/**
 * cap_string - capitalizes a string
 * @str: pointer parameter
 * Return: capitalized array
*/
char *cap_string(char *str)
{
        int i;

        for (i = 0 ; str[i] != '\0' ; i++)
        {
                if (str[i] >= 97 && str[i] <= 122)
                {
                        str[i] = str[i] - 32;
                }
        }
        return (str);
}
