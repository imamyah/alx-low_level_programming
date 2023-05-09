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
	char *buf;
	int rd, wr, ffrom, fto, cf, ct;

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}

	buf = malloc(sizeof(char) * 1024);

	ffrom = open(argv[1], O_RDONLY);
	rd = read(ffrom, buf, 1024);

	while (r > 0)
	{
		if (ffrom == -1 || rd == -1)
		{
			exit(98);
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		}

		fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		wr = write(fto, buf, rd);
		if (fto == -1 || wr != rd)
		{
			exit(99);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		}
	}

	free(buf);
	cf = close(ffrom);
	ct = close(fto);
	if (cf == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom);
	} else if (ct == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fto);
	}

	return (0);
}
