#include "main.h"

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
}
