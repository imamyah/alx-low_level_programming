#include "main.h"

/**
 * read_textfile -  reads a text file and prints to the standard output
 * @filename: the name of the file to read
 * @letters: the number of letters should be read and printed
 *
 * Return: the actual number of letters it ccould read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);
	free(buf);
	close(fd);
	return (wr);
}
