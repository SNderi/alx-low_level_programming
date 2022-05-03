#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argc: Arguments count
 * @argv: Pointer to pointer of arguments to main
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd, df, size, w;
	char *buf = malloc(1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC);
	df = open(argv[1], O_RDONLY, 0664);
	if (df == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while (size > 0)
	{
		size = read(fd, buf, 1024);
		w = write(df, buf, size);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}

	if (close(df) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", df);
		exit(100);
	}
	return (0);
}
