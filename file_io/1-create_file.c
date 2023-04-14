#include "main.h"

/**
 * create_file - creates a file with the given filename and writes the given
 * text content to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	int wrlen, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
	{
		len++;
	}

	wrlen = write(fd, text_content, len);

	if (wrlen == -1 || wrlen != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (-1);
}
