#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all args
* @ac: par1
* @av: par2
* Return: success
*/
char *argstostr(int ac, char **av)
{
	char *st, *s;
	int i, x, y;
	int len = 0;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
	s = av[i];
	x = 0;
	while (s[j++])
        len++;
	len++;
	}

	st = (char *)malloc(sizeof(char) * (len + 1));
	if (st == NULL)
	return (NULL);
	for (i = 0, x = 0; i < ac && x < len; i++)
	{
	s = av[i];
	y = 0;
	while (s[y])
	{
        st[x] = s[y];
        y++;
        x++;
	}
	st[x++] = '\n';
	}
	st[x] = '\0';
  return (st);
}
