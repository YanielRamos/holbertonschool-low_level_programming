#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed, or 0 if an error occurred
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t br = read(fd, buffer, letters);
	ssize_t bw = write(STDOUT_FILENO, buffer, br);

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	if (br == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	if (bw == -1 || bw != br)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bw);
}
