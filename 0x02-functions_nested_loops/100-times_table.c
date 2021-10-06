#include "main.h"

void print_times_table(int n)
{
	int col, row, result, i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (col = 0; col <= n; col++)
		{
			for (row = 0; row <= n; row++)
			{
				result = row * col;
				if (result <= 9)
   				{
					if (row >= 1)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + result);

					if (row < n)
						_putchar(',');
				}
				else if (result >= 10 && result <= 99)
				{
					i = result / 10;
					j = result % 10;
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + i);
					_putchar('0' + j);
					if (row < n)
						_putchar(',');
				}
				else
				{
					_putchar(' ');
					i = result / 100;
					j = (result / 10) % 10;
					k = result % 10;
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar('0' + k);
					if (row < n)
						_putchar(',');
				}
			}
			_putchar(10);
		}
	}
}
