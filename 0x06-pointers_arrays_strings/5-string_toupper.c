#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @a: array argument
 *
 * Return: Always 0.
 */
char *string_toupper(char *a)
{
	int pos;

	for (pos = 0; a[pos] != 0; pos++)
	{
		if (a[pos] >= 97 && a[pos] <= 122)
			a[pos] = a[pos] - 32;
	}
	return (a);
}
