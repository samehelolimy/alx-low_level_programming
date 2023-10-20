#include "main.h"
#include <stdlib.h>

void utility(char **, char *);
void word(char **, char *, int, int, int);

/**
* strtow - splits a string
* @str: first parameter
* Return: returns success
*/

char **strtow(char *str)
{
	int x, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
	return (NULL);

	x = 0;
	flag = 0;
	len = 0;
	while (str[x])
	{
	if (flag == 0 && str[x] != ' ')
	flag = 1;
	if (x > 0 && str[x] == ' ' && str[x - 1] != ' ')
	{
	flag = 0;
	len++;
	}
	x++;
	}

	len += flag == 1 ? 1 : 0;
	if (len == 0)
	return (NULL);

	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
	return (NULL);

	utility(words, str);
	words[len] = NULL;
	return (words);
}

/**
* utility - words in array
* @words: first para
* @str: our string
*/
void utility(char **words, char *str)
{
	int i, j, start, flag;

	i = 0;
	j = 0;
	flag = 0;

	while (str[i])
	{
	if (flag == 0 && str[i] != ' ')
	{
	start = i;
	flag = 1;
	}

	if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
	{
	word(words, str, start, i, j);
	j++;
	flag = 0;
	}

	i++;
	}

	if (flag == 1)
	word(words, str, start, i, j);
}

/**
* word - creates words
* @words: first par
* @str: second par
* @start: 3rd par
* @end: fourth par
* @index: fifth
*/
void word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
	words[index][j] = str[start];
	words[index][j] = '\0';
}

