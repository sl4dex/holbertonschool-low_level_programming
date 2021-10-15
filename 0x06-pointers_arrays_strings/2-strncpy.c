#include "main.h"
/**
 * *_strncpy - 
 * @dest: string destination
 * @src: string to be concatenated
 * @n: resulting string size
 *
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int pos;

	/* gets size of array until n*/
	for (pos = 0; src[pos] != 0 && pos < n; pos++)
	{
		/* and copies src to dest */
		*(dest + pos) = *(src + pos);
	}
	/* if src string size does not reach n*/
	for (; pos < n ; pos++)
	{
		/* fill with \0 until n */
		*(dest + pos) = 0;
	}
	return (dest);
}
