#include "main.h"

/*
 * puts_half - prints half of a string, followed by a new line.
 * @str: string argument
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != 0; i++)
	{
	}
	for (j = 0; str[j] != 0; j++)
	{
		if (j >= (i / 2))
			_putchar(str[j]);
	}
	_putchar(10);
}
