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
 * append_text_to_file - appends text at the end of a file
 * @filename: first par
 * @text_content: sec par
 * Return: success
 */

int append_text_to_file(const char *filename, char *text_content)
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
