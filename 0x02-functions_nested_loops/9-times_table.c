#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int col, row, result, i, j;

	for (col = 0 ; col < 10; col++)
	{
		for (row = 0; row <= 9; row++)
		{
			result = row * col;
			if (result <= 9)
			{
				_putchar('0' + result);
			}
			else
			{
				i = result / 10;
				j = result % 10;
				_putchar('0' + i);
				_putchar('0' + j);
			}
			if (row != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
