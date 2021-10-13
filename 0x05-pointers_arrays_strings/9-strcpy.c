#include "main.h"

/**
 * *_strcpy - copies string to the buffer
 * @dest: string to be copied pointed to by src
 * @src: pointer pointing to destinaton
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
