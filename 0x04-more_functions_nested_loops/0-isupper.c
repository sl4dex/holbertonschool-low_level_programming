#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: ascii code for the character
 *
 * Return: 1 if is upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
