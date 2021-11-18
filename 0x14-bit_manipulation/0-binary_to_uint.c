#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: int pointer pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bnum, dnum, n, pos;

	dnum = 0;
	if (!b)
		return (0);
	for (pos = 0; b[pos] != 0; pos++)
	{
		if (b[pos] != '0' && b[pos] != '1')
			return (0);
	}
	bnum = atoi(b);
	for (pos = 0; bnum != 0; pos++)
	{
		n = bnum % 10;
		dnum += n << pos;
		bnum /= 10;
	}
	return (dnum);
}
