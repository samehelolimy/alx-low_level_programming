#include "main.h"

/**
 * error_f - checks if files can be opened.
 * @file_f: file_from.
 * @file_t: file_to.
 * @argv: args
 * Return: success
 */
void error_f(int file_f, int file_t, char *argv[])
{
	if (file_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - checker
 * @argc: no of args
 * @argv: args vector
 * Return: success
 */
int main(int argc, char *argv[])
{
	ssize_t nc, nw;
	int file_f, file_t, err;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_f file_t");
		exit(97);
	}

	file_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_f = open(argv[1], O_RDONLY);
	error_f(file_f, file_t, argv);

	nc = 1024;
	while (nc == 1024)
	{
		nc = read(file_f, buf, 1024);
		if (nc == -1)
			error(-1, 0, argv);
		nw = write(file_t, buf, nc);
		if (nw == -1)
			error_f(0, -1, argv);
	}

	err = close(file_f);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}

	err = close(file_t);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}
	return (0);
}

