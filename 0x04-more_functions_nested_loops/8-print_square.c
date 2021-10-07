#include "main.h"


/**
 * print_square - prints a square with #s, followed by a new line.
 * @size: dimension of the square
 *
 */
void print_square(int size)
{
	int row, i;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
