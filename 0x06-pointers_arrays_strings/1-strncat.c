#include "main.h"
/**
 * *_strncat - concatenates two strings until n
 * @dest: string destination
 * @src: string to be concatenated
 * @n: max size of result
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int pos, pos2;

	/*averigua el size de dest */
	for (pos = 0; dest[pos] != 0; pos++)
	{
	}
	/* recorre el string a copiar */
	for (pos2 = 0; src[pos2] != 0; pos2++)
	{
		if (pos2 < n)
			*(dest + pos + pos2) = *(src + pos2);
		else
			break;
	}
	/* agrega el null al final del nuevo string */
	*(dest + pos + pos2) = 0;
	return (dest);
}
