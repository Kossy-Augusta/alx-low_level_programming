#include "main.h"
#include <fcntl.h>
#include <stdio.h>

/**
 * close_file - makes sure all file desciptors closes
 * @fd: file descriptor
 *
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: name of file buffer is soring
 *
 * Return: A pointer to the newly allocated memory
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{

		dprintf(STDERR_FILENO, "Error: can't read from file %s", file);
		exit(98);
	}

	return (buffer);
}

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @argv:array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int ac, char *argv[])
{
	char *buffer;
	int fd_from, fd_to, read_content, write_content;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "usage cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[1]);
	fd_from = open(argv[1], O_RDONLY);
	read_content = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd_from == -1  || read_content == -1)
		{
			dprintf(STDOUT_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_content = write(fd_to, buffer, read_content);
		if (write_content == -1 || fd_to == -1)
		{
			dprintf(STDOUT_FILENO, "Error: can't write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_content = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY || O_APPEND);
	} while (read_content > 0);
	free(buffer);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
