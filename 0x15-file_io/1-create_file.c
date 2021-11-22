#include "main.h"
#include <string.h>
/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, outw;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR);
	if (fd == -1)
		return (-1);
	if (!text_content)
		outw = write(fd, "", 1);
	else
		outw = write(fd, text_content, strlen(text_content) + 1);
	if (outw == -1)
		return (-1);
	return (1);
}
