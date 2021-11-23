#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, outr, outw, c1, c2;
	char buf[1024];

	outw = 1;
	if (argc != 3)
		exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	outr = read(fd1, buf, 1024);
	while (outr == 1024 && outw != -1)
	{
		outw = write(fd2, buf, outr);
		if (outw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
			exit(99);
		}
		outr = read(fd1, buf, 1024);
	}
	outw = write(fd2, buf, outr);
	if (outw == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]), exit(99);
	if (outr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		exit(99);
	}
	c1 = close(fd1);
	if (c1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close the %d\n", fd1), exit(100);
	c2 =close(fd2);
	if (c2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close the %d\n", fd2), exit(100);
	return (0);
}
