#include "main.h"

void print_alphabet_x10(void)
{
	int i, v;

	for (v = 0; v < 10; v++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
