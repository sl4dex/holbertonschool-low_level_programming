#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @a: array argument
 *
 * Return: encoded string
 */
char *leet(char *a)
{
	int pos, i;
	char mayus[6] = {'A', 'E', 'O', 'T', 'L'};
	char lower[6] = {'a', 'e', 'o', 't', 'l'};
	char num[6] = {4, 3, 0, 7, 1};

	for (pos = 0; a[pos] != 0; pos++)
	{
		for (i = 0; i < 5; i++)
		{
			if (a[pos] == mayus[i] || a[pos] == lower[i])
				a[pos] = '0' + num[i];
		}
	}
	return (a);
}
