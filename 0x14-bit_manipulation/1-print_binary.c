#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 0; n >> i != 0; i++)
	{
	}
	if (n == 0)
		_putchar('0');
	else
	{
		i--;
		while (i >= 0)
		{
			if (n >> i & 1)
				_putchar('1');
			else
				_putchar('0');
			i--;
		}
	}
}
