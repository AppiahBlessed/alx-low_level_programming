#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_f(int fdp);

/**
 *create_buffer - Allocates bytes to buffer.
 *@file: The name of file..
 *
 *Return: A pointer to the new buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 *close_f - Closes file descriptors function.
 *@fdp: The file descriptor..
 */
void close_f(int fdp)
{
	int c;

	c = close(fdp);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fdp %d\n", fdp);
		exit(100);
	}
}

/**
 *main - Copies content from one file to another file
 *@argc: The number of arguments at runtime.
 *@argv: Array of pointers to arguments.
 *Return: Returns 0 on success.
 *
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wt = write(to, buffer, rd);
		if (to == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_f(from);
	close_f(to);

	return (0);
}
