#include "main.h"

/**
 * jack_bauer - Prints every minute of a 24 hour period (starting at 00:00)
 */
void jack_bauer(void)
{
		int a, b, c, d, n, m;
			a = b = c = d = 0;

	for (m = 0; m <= 23; m++)
	{
		for (n = 0; n <= 59; n++)
		{
			a = m / 10;
			b = m % 10;
			c = n / 10;
			d = n % 10;
			_putchar('0' + a);
			_putchar('0' + b);
			_putchar(':');
			_putchar('0' + c);
			_putchar('0' + d);
			_putchar('\n');
		}
	}
}
