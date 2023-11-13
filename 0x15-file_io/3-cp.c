#include "main.h"

/**
 * error_f - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: args
 * Return: success
 */
void error_f(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
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
	int file_from, file_to, err;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_from = open(argv[1], O_RDONLY);
	error_f(file_from, file_to, argv);

	nc = 1024;
	while (nc == 1024)
	{
		nc = read(file_from, buf, 1024);
		if (nc == -1)
			error_f(-1, 0, argv);
		nw = write(file_to, buf, nc);
		if (nw == -1)
			error_f(0, -1, argv);
	}

	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

