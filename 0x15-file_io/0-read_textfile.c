#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name to read
 * @letters: the number of letters it should read and print
 *
 * Return: if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, out;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(letters * 1);
	if (!buf)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	out = read(file_descriptor, buf, letters);
	if (out == -1)
		return (0);
	out = write(1, buf, out);
	if (out == -1)
		return (0);
	free(buf);
	close(file_descriptor);
	return (out);
}
