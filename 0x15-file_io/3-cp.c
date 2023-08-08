#include "main.h"
#include <fcntl.h>

/**
 * cp_file - copies one file to another
 * @src: source file name
 * @dest: destination file name
 * Return: 0 (success), 97-100 (exit value errors)
 */
int cp_file(const char *src, const char *dest)
{
	int file_from, file_to, readbytes, writebytes;
	char buffer[1024];

	file_from = open(src, O_RDONLY);
	if (file_from == -1 || open(dest, O_CREAT | O_TRUNC | O_WRONLY, 0664) == -1)
		return (file_from == -1 ? 98 : 99);

	file_to = open(dest, O_WRONLY | O_TRUNC);
	if (file_to == -1)
		return (99);

	while ((readbytes = read(file_from, buffer, 1024)) > 0)
	{
		writebytes = write(file_to, buffer, readbytes);
		if (writebytes == -1)
			return (99);
	}

	if (readbytes == -1)
		return (98);

	if (close(file_from) == -1 || close(file_to) == -1)
		return (100);

	return (0);
}

/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * @argv: first is file to copy from (fd_1), second is file to copy to (fd_2)
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	int result = cp_file(argv[1], argv[2]);

	if (result != 0)
	{
		if (result == 98)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		else if (result == 99)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		else if (result == 100)
			dprintf(STDERR_FILENO, "Error: Can't close files\n");

		return (result);
	}

	return (0);
}
