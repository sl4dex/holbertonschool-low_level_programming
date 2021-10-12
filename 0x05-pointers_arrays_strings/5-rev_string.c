#include "main.h"

/**
* rev_string - prints a string, and his reversed version.
* @s: pointer to string
*/
void rev_string(char *s)
{
	int size, last;
	char aux;

	for (size = 0; s[size] != 0; size++)
	{
	}
	size = size - 1;
	for (last = size; last >= 0; last--)
	{
		if (last == size / 2)
		{
			break;
		}
		else
		{
		aux = *(s + (size - last));
		*(s + (size - last)) = *(s + last);
		*(s + last) = aux;
		}
	}
}

