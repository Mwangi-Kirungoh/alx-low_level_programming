#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to be read and printed.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise - the actual number of bytes read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	if (w == -1 || t == -1 || w != t)
		return (0);

	return (w);
}
