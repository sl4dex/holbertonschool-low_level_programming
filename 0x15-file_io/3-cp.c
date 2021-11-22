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
	int fd1, fd2, outr;
	char buf[1024];

	if (argc != 3)
		exit(97);
	fd1 = open(argv[1], O_TRUNC | O_RDWR);
	if (fd1 == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_RDWR, 664);
	if (fd2 == -1)
	{
		printf("Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}
	outr = read(fd1, buf, 1024);
	write(fd2, buf, outr);
	close(fd1);
	if (fd1 == -1)
	{
		printf("Error: Can't close the %d\n", fd1);
		exit(100);
	}
	close(fd2);
	if (fd1 == -1)
	{
		printf("Error: Can't close the %d\n", fd2);
		exit(100);
	}
	return (0);
}
