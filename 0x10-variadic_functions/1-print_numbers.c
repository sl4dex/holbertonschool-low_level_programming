#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_number - prints an integer wit _putchar() only
 * @n: int to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * print_numbers - prints numbers
 * @separator: separator string
 * @n: num of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i, j;

	if (n > 0)
	{
		va_start(ptr, n);
		for (i = 0; i < n; i++)
		{
			print_number(va_arg(ptr, int));
			if (separator != 0)
			{
				for (j = 0; separator[j] != 0; j++)
				{
					if (i != n - 1)
						_putchar(separator[j]);
				}
			}
		}
		_putchar(10);
		va_end(ptr);
	}
}
