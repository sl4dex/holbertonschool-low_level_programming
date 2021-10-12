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
	}
	_putchar(10);
	i -= 1;
	for (j = i; j >= 0; j--)
	{
		*(s + j) = *(s + (i - j));
		_putchar(*(s + j));
	}
	_putchar(10);
}

