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
	int new, old, size, w;
	char *buf = malloc(1024);

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]), exit(97);
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	new = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (new == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	old = open(argv[1], O_RDONLY);
	if (old == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (size > 0)
	{
		size = read(old, buf, 1024);
		if (size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(new, buf, size);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(old) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", old), exit(100);
	if (close(new) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", new), exit(100);
	return (0);
}
