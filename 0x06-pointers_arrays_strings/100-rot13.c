#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	int pos, i;
	char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
	'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
	'K', 'L', 'M', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
	'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm'};

	for (pos = 0; str[pos] != 0; pos++)
	{
		for (i = 0; i < 65; i++)
		{
			if (str[pos] == letters[i])
			{
				str[pos] = *(letters + i + 13);
				break;
			}
		}
	}
	return (str);
}
