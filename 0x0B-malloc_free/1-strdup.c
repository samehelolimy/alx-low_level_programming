#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: first parameter
 * Return: success
*/

char *_strdup(char *str)

{

	char *m;
	int i, s = 0;

	if (str == NULL)
	return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;

	m = malloc(sizeof(char) * (i + 1));

	if (m == NULL)
	return (NULL);

	for (s = 0; str[s]; s++)

		m[s] = str[s];

	return (m);

}

