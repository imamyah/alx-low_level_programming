#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	int rd, cf, ct, wr = 0, file_from, file_to;

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}

	file_from = open(argv[1], O_RDONLY);
	rd = read(file_from, buf, 1024);

	if (file_from == -1 || rd == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	wr = write(file_to, buf, rd);
	while (rd > 0)
		if (file_to == -1 || wr != rd)
		{
			exit(99);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		}

	cf = close(file_from);
	ct = close(file_to);
	if (cf == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	} else if (ct == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	}
	return (0);
}
