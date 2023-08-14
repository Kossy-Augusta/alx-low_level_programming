#include "main.h"
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: a NULL terminated string
 *
 * Return: 1 on success an -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, content;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	content = write(fd, text_content, len);
	if (content == -1 || fd  == -1)
		return (-1);
	close(fd);

	return (1);
}
