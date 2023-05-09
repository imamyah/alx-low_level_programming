#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the NULL terminted string to write the file
 *
 * Return: 1 on Success, -1 on Failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
