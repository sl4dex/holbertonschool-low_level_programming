#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: constant num of numbers
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, res;
	va_list ptr;

	res = 0;
	if (n == 0)
		return (0);
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		res += va_arg(ptr, int);
	va_end(ptr);
	return (res);
}
