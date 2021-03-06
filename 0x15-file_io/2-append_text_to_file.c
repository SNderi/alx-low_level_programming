#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: name of the file
 * @text_content: terminated string to add to end of file
 *
 * Return: 1 success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	int len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
