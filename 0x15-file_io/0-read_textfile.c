#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - read a certain size and prints to std output
 * @filename: file to read from
 * @letters: size to read
 * Return: actual size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t readbytes, writebytes;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	readbytes = read(fd, buffer, letters);
	if (readbytes == -1)
	{
		close(fd);
		return (0);
	}
	writebytes = write(STDOUT_FILENO, buffer, readbytes);
	if (writebytes == -1)
	{
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (readbytes);

}
