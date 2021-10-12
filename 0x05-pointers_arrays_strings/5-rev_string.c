#include "main.h"

/**
* rev_string - prints a string, and his reversed version.
* @s: pointer to string
*/
void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		_putchar(*(s + i));
	}
	_putchar(10);
	for (j = i - 1; j >= 0; j--)
		_putchar(*(s + j));
	_putchar(10);
}

