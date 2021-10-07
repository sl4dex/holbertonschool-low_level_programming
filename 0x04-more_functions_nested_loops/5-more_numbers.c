#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14 and by a new line
 */
void more_numbers(void)
{
	int row, i, firstd, lastd;

	for (row = 0; row < 10; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				firstd = i / 10;
				_putchar('0' + firstd);
			}
			lastd = i % 10;
			_putchar('0' + lastd);
		}
		_putchar(10);
	}
}
