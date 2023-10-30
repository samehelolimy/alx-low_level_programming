#include "main.h"

/**
 * _strlength - returns length of string
 * @x: the string
 * Return: length of string
 */

int _strlength(char *x)
{
	int i = 0;

	if (!x)
		return (0);
	while (*x++)
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text
 * Return: success
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t byte = 0;
	ssize_t l = _strlength(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (l)
		byte = write(f, text_content, l);
	close(f);
	return (byte == l ? 1 : 1);
}
