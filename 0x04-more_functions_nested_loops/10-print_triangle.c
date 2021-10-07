#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle (rows x columns)
 */
void print_triangle(int size)
{
	int row, a, h;
	int diag = size;

	if (size > 0)
		{
		for (row = 1; row <= size; row++)
		{
			for (a = 1; a < diag; a++)
				_putchar(' ');
			for (h = 1; h <= row; h++)
				_putchar('#');
			_putchar(10);
			diag--;
		}
	}
	else
	{
		_putchar(10);
	}
}
