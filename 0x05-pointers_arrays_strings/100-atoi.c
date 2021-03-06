#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer.
 * @s: string argument
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int pos, num, negative;
	unsigned int lol;

	num = 0;
	lol = 0;
	negative = 1;
	for (pos = 0; s[pos] != 0; pos++)
	{
		/* if position was a "-", remember */
		if (s[pos] == '-')
		{
			negative = negative * -1;
		}
		/* if its a number */
		if (s[pos] >= 48 && s[pos] <= 57)
		{
			/* add it to the en of num */
			lol = (lol * 10) + (s[pos] - 48);
			/* if the next position is not a number, stop */
			if ((*(s + pos + 1) < 48) || (*(s + pos + 1) > 57))
				break;
		}
	}
	num = lol;
	if (negative == (-1))
		num = -num;
	return (num);
}
