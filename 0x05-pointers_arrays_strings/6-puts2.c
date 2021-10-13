#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != 0; i++)
	{
	}
	for (j = 0; j <= i; j += 2)
	{
		if (str[j] != 0)
			_putchar(str[j]);
	}
	_putchar(10);
}
