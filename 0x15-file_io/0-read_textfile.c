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
	int file_descriptor, outr, outw;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(letters * 1);
	if (!buf)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buf);
		return (0);
	}
	outr = read(file_descriptor, buf, letters);
	if (outr == -1)
	{	free(buf);
		return (0);
	}
	outw = write(STDOUT_FILENO, buf, outr);
	if (outw == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(file_descriptor);
	return (outw);
}
