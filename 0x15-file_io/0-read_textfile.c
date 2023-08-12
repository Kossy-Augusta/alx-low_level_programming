#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * read_textfile - reads a textfile and prints it to the POSIX standard output
 * @filename: name of file to be read
 * @letters: number of bytes to be printed
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_txt;
	int fd;
	char *txt;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	txt = malloc(sizeof(char) * letters);
	if (txt == NULL)
		return (0);
	read_txt = read(fd, txt, letters);
	if (read_txt == -1)
		return (0);
	close(fd);
	printf("%s", txt);
	free(txt);

	return (read_txt);
}
