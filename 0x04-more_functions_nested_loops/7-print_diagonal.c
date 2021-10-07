#include "main.h"


/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: rows of the diagonal
 *
 */
void print_diagonal(int n)
{
	int row, i;

	if (n > 0)
	{
		/* number of rows for the diagonal */
		for (row = 1; row <= n; row++)
		{
			for (i = 1; i <= row; i++)
			{
				if (i == row)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
