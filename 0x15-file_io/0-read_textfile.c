#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX std output
 * @filename: Text file to read and print
 * @letters: number of letters to read and print
 *
 * Return: Number of letters read and printed on success
 *	0 if filename is NULL or write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	int s, w;

	char *buf = malloc(letters);

	if ((fd == -1) || (filename == NULL))
		return (0);

	s = read(fd, buf, letters);
	if (s == -1)
		return (0);
	/*buf[s] = '\0';*/

	w = write(STDOUT_FILENO, buf, s);

	if (w == -1)
		return (0);
	free(buf);
	close(fd);
	return (w);
}
