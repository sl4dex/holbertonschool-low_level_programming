#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string argument
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int pos, num, negative;

	num = 0;
	negative = 0;
	for (pos = 0; s[pos] != 0; pos++)
	{
		/* if its a number */
		if (s[pos] >= 48 && s[pos] <= 57)
		{
			/* add it to the en of num */
			num = (num * 10) + (s[pos] - 48);
			/* if previous position was a "-", remember */
			if (*(s + pos - 1) == '-')
				negative = 1;
			/* if the next position is not a number, stop */
			if ((*(s + pos + 1) < 48) || (*(s + pos + 1) > 57))
				break;
		}
	}
	if (negative == 1)
		num = -num;
	return (num);
}
