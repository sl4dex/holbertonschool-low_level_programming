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
	if (i == 0)
		_putchar(i = '0');
	else
	{
		i--;
		do {
			if (n >> i & 1)
				_putchar('1');
			else
				_putchar('0');
		i--;
		} while (i >= 0);
	}
}
