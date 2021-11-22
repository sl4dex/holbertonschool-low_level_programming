#include "main.h"
#include <string.h>
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, err;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		err = write(fd, text_content, strlen(text_content));
		if (err == -1)
			return (-1);
	}
	return (1);
}
